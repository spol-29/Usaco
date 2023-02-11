#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin("taming.in");
    ofstream cout("taming.out");
    int n, MAX = 0, MIN = 0;
    cin >> n;
    int log[n];
    string breakout[n];
    fill_n(breakout, n, "null");
    breakout[0] = "true";
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        log[i] = a;
        if(log[i] != -1){
            breakout[i-(a)] = "true";
            breakout[i] = "false";
        }
        if(a != -1 && log[i] != -1 && a != log[i]){
            cout << -1;
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        if(breakout[i] == "true"){
            MAX++;
        }
        if(breakout[i] == "false"){
            MIN++;
        }
        if(breakout[i] == "null"){
            MAX++;
            MIN++;
        }
    }
    cout << MIN << " " << MAX;
}
