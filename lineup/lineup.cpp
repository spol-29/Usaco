#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin("lineup.in");
    ofstream cout("lineup.out");
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    string a[8]={"Beatrice","Belinda","Bella","Bessie","Betsy","Blue","Buttercup","Sue"};
    sort(a,a+8);
    do{
        bool flag=true;
        for(int i=0;i<n;i++){
            int x,y;
            for(int j=0;j<8;j++){
                if(a[j]==s[i]){
                    x=j;
                }
                if(a[j]==s[i+1]){
                    y=j;
                }
            }
            if(s[i+2]=="before"){
                if(x>y){
                    flag=false;
                    break;
                }
            }
            else{
                if(x<y){
                    flag=false;
                    break;
                }
            }
            i+=2;
        }
        if(flag){
            for(int i=0;i<8;i++){
                cout<<a[i]<<endl;
            }
            break;
        }
    }while(next_permutation(a,a+8));
    return 0;
}