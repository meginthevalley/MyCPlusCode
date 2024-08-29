#include <iostream>

using namespace std;
//Intro to templates
int Max(int x, int y) {
    //if x is greater than y return x, else return y
    return x > y ? x: y;
}

int main()
{
    auto num = Max(3,8);
    cout << num << endl;
    return 0;
}