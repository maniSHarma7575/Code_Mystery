
// C++ program to illustrate hashing using 
// unordered_set in CPP STL

#include <iostream> 
#include <unordered_set> 
#include <iterator> 

using namespace std; 

int main() 
{ 
    // empty set container 
    unordered_set <int> s;         
    
    // List of elements
    int arr[] = {40, 20, 60, 30, 50, 50, 10};
    
    // Insert the elements of the List
    // to the set
    for(int i = 0; i < 7; i++)
        s.insert(arr[i]);

    // Print the content of the unordered set
    // The elements of the set will not be sorted 
    // without any duplicates
    cout<<"The elements in the unordered_set are: \n";
    for(auto itr=s.begin(); itr!=s.end(); itr++)
    {   
        cout<<*itr<<" ";
    }
    
    // Check if 50 is present in the set
    if(s.find(50)!=s.end())
    {
        cout<<"\n\n50 is present";
    }
    else
    {
        cout<<"\n\n50 is not present";
    }
    
    return 0; 
} 
