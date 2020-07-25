package round1;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Leapfrog_Ch1 {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int T = Integer.parseInt(br.readLine());
		
		int i = 0;
		while (i < T) {
			String line = br.readLine();
			char [] characters = line.toCharArray();
			int totPoints = 0;
			int totBeta = 0;
			for (char pos : characters) {
				if (pos != 'A') {
					if (pos == '.')
						totPoints++;
					else
						totBeta++;
				}
			}
			bw.write("Case #" + (i+1) + ": "
					+ (totPoints != 0 && totBeta >= totPoints ?  "Y\n" : "N\n"));
			
			i++;
		}
		br.close();
		bw.close();

	}

}