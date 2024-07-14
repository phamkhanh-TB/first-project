#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int> > vec; 
  
    // Elements to insert in column 
    int num = 10; 
  
    // Inserting elements into vector 
    for (int i = 0; i < 5; i++) { 
        // Vector to store column elements 
        vector<int> v1; 
  
        for (int j = 0; j < 5; j++) { 
            v1.push_back(num); 
            num += 5; 
        } 
  
        // Pushing back above 1D vector 
        // to create the 2D vector 
        vec.push_back(v1); 
    } 
  
    // Displaying the 2D vector 
    for (int i = 0; i < vec.size(); i++) { 
        for (int j = 0; j < vec[i].size(); j++) 
            cout << vec[i][j] << " "; 
        cout << endl; 
    } 
    return 0; 
}