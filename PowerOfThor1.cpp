#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int lx; int ly; int tx; int ty; 
    cin>>lx>>ly>>tx>>ty;cin.ignore();

    while (1) {
        int remaining_turns;
        cin >> remaining_turns; cin.ignore();

        for(int i = remaining_turns; i >= 0;i++){
            if(tx > lx && ty > ly){
                cout << "NW" << endl;
                tx = tx -1;
                ty = ty -1;
            }
            else if(tx < lx && ty < ly){
                cout << "SE" << endl;
                tx = tx +1;
                ty = ty +1;
            }
            else if(tx > lx && ty < ly){
                cout << "SW" << endl;
                tx = tx -1;
                ty = ty +1;
            }
            else if(tx < lx && ty > ly){
                cout << "NE" << endl;
                tx = tx +1;
                ty = ty -1;
            }
            else if(tx == lx){
                if(ty > ly){
                    cout << "N" << endl;
                    ty = ty -1;
                }
                else{
                    cout << "S" << endl;
                    ty = ty +1;
                }
            }
            else if(ty == ly){
                if(tx > lx){
                    cout << "W" << endl;
                    tx = tx -1;
                }
                else{
                    cout << "E" << endl;
                    tx = tx +1;
                }
            }
        }       
    }
}