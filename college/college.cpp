#include<bits/stdc++.h>
using namespace std;
int main(){
   int a;
   cin >> a;
   vector<int> tuitions;
   for(int i = 0; i < a; i++){
        int b;
        cin >> b;
        tuitions.push_back(b);
   }
   int c = 0;
   for(int i = 0; i < a; i++){
        if(tuitions[i] > c){
            c = tuitions[i];
        }
   }
   for(int i = 1; i <= c; i++){
        int d = 0;
        for(int j = 0; j < a; j++){
            if(tuitions[j] >= i){
                d++;
            }
        }
        if(d >= i){
            cout << i << endl;
        }
   }
}
