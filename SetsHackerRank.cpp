#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() { 
    //declare the query int
    int Q;
    //set Q
    cin>>Q;
    
    //create the set to store elements in
    set<int> elements;
    
    for(int i=0;i<=Q-1;i++){
        //the two values obtained in the query 
        //y is the type of query and x is the integer value
        int x, y;
        //get y and x
        cin>>y>>x;
        
        //if y is equal to 1 add the int x to the set
        if(y==1){
            elements.insert(x);
        }
        //if y is equal to 2 erase the int x from the set
        else if(y ==2){
            elements.erase(x);
        }
        //if y is equal to 3 print if x is in the set
        else{
            //conditional for if x is in the set
            string answer = (elements.count(x)) ? "Yes" : "No";
            //print result
            cout<<answer<<endl;
        }
    }
    
    return 0;
}