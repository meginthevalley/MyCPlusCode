#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    //create the variable N
    int N;
    //get N
    cin>>N;
    //declare the array
    int arr[N];
    //for the values in the loop
    int num;
    
    //for loop to get each value
    for (int i=0; i<N; i++) {
        //gets the current number
        cin>>num;
        //puts the current number in the position of i in the array
        arr[i]=num;
    }
    
    //a for loop to get these numbers in reverse order and print them
    for(int k=N-1; k>=0; k--){
        
        //print out the result
        cout<<arr[k]<< " ";
    }
    
    return 0;
}