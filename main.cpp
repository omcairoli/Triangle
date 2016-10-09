// Print a triangle given an angle between 15 and 75 degrees
// main.cpp
// Created by: Oscar M. Cairoli.
//


#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;


int main(int argc, const char * argv[]){
    
    int theta, xcoord = 0;
    
    cout << "Enter a theta between 15 and 75 degrees: ";
    cin >> theta;
    
    for (int i = 0; i <= 31; i++)
    {
        xcoord = floor( i * tan( theta * M_PI / 180) );
        
        for (int j = 0; j < xcoord; j++)
        {
            cout << "*";
        }
        
        cout << endl; 
    }
    
    return 0;
}
