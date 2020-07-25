import java.util.*;
import java.io.*;
import java.math.*;
public
class Main
{
  static long mod = (long)(1e9 + 7);
public
  static void main(String sp[]) throws IOException
  {
    File file = new File("D:\\l1.txt");
    File save = new File("D:\\out.txt");
    Scanner sc = new Scanner(file);
    PrintWriter out = new PrintWriter(save);
    while (sc.hasNext())
    {
      int n = Integer.parseInt(sc.next());
      long count = 1;
      for (int j = 0; j < n; j++)
      {
        String s = sc.next();
        long a = 0;
        long b = 0;
        long dot = 0;
        boolean flag = true;
        for (int i = 0; i < s.length(); i++)
        {
          if (s.charAt(i) == 'A')
            a++;
          if (s.charAt(i) == 'B')
            b++;
          if (s.charAt(i) == '.')
            dot++;
        }
        if (dot == 0 || a == 0 || b == 0)
          flag = false;
        else
        {
          if (b >= dot)
          {
            flag = true;
          }
          else
            flag = false;
        }
        String ans = "";
        if (flag == false)
          ans = "N";
        else
          ans = "Y";
        out.println("Case #" + count + ": " + ans);
        count++;
      }
    }
    out.close();
  }
}