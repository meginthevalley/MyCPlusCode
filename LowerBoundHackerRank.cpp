#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    //declare the int for num of integers
    int N;
    //set N
    cin>>N;
    
    //create a vector to store the items
    vector<int> sorted;
      
    for(int i=0; i<=N-1; i++){
        //declare int for the integers in the vector
        int a;
        //get the int
        cin>>a;  
        //put the int in the vector
        sorted.push_back(a);
    }
    
    //declare the int for queries
    int Q;
    //get Q
    cin>>Q;
    
    //create a for loop to test the queries
    for(int x=0; x<=Q-1; x++){
        int query;
        cin>>query;
        int index;
        //get the lower bound
        auto position = lower_bound(sorted.begin(), sorted.end(),query);
        //get the index 
        index = position -sorted.begin();
        if(sorted[index] == query){
            //add 1 since the problem asks for 1-based index
            index++;
            //set the index to a string
            string indexString = to_string(index);
            //print the result
            cout<<"Yes "<<indexString<<endl;
        }
        else{
            //increment index
            index++;
            //set index to a string
            string indexString = to_string(index);
            //print result
            cout<<"No "<<indexString<<endl;
        }
    }
    return 0;
}