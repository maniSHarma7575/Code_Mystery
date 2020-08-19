
// C++ program to illustrate Map container

#include <iostream> 
#include <iterator> 
#include <map> 

using namespace std; 

int main() 
{ 
    // empty map container 
    map<int, int> mp; 

    // Insert elements in random order 
    // First element of the pair is the key
    // second element of the pair is the value
    mp.insert(pair<int, int>(1, 40)); 
    mp.insert(pair<int, int>(2, 30)); 
    mp.insert(pair<int, int>(3, 60)); 
    mp.insert(pair<int, int>(4, 20)); 
    mp.insert(pair<int, int>(5, 50)); 
    mp.insert(pair<int, int>(6, 50)); 
    mp.insert(pair<int, int>(7, 10)); 

    // printing map mp 
    map<int, int>::iterator itr; 
    cout << "The map mp is : \n"; 
    cout << "KEY\tELEMENT\n"; 
    for (itr = mp.begin(); itr != mp.end(); ++itr) { 
        cout << itr->first 
            << '\t' << itr->second << '\n'; 
    } 

    return 0; 
} 
