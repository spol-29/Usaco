#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int b;
        cin >> b;
        int c[b];
        for(int j = 0; j < b; j++){
            cin >> c[j];
        }
        int d = 0;
        for(int j = 0; j < b; j++){
            for(int k = j + 1; k < b; k++){
                if(c[j] > c[k]){
                    d++;
                }
            }
        }
        cout << d << endl;
    }
}