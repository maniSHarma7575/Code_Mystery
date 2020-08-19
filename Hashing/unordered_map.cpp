
// C++ program to demonstrate functionality of unordered_map 
#include <iostream> 
#include <unordered_map> 
using namespace std; 

int main() 
{ 
    // Declaring umap to be of <string, int> type 
    // key will be of string type and mapped value will 
    // be of double type 
    unordered_map<string, int> umap; 

    // inserting values 
    umap.insert({"GeeksforGeeks", 10}); 
    umap.insert({"Practice", 20}); 
    umap.insert({"Contribute", 30}); 

    // Traversing an unordered map 
      cout << "The map umap is : \n"; 
    cout << "KEY\t\tELEMENT\n"; 
    for (auto itr = umap.begin(); itr!= umap.end(); itr++) 
      cout << itr->first 
            << '\t' << itr->second << '\n';
  
      return 0;
} 
