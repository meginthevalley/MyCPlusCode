#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    int x = 5800; //temp comparison number
    int closest_temp = 0;
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        int y = abs(t);
        if(0<=y && y<x){
            x = y;
            closest_temp = t;
        }
        else if(y==x && t>0){
            closest_temp = abs(t);
        }
        else if(y==x && t<0 && closest_temp < 0){
            closest_temp = t;
        }
        else{
            continue;
        }
    }
    cout<<closest_temp<<endl;
    cerr << "Debug messages..." << endl;


}