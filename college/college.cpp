#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,MAX = 0;
    int k = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> k;
        a[i] = k;
        MAX = max(MAX,k);
    }
    int x = MAX;
    int cnt[x];
    for(int i = 1; i <= MAX; i++){
        if(i <= k){
            cnt[i-1] = i*n;
        }
    }
    for(int i = 0; i < cnt.size(); i++){
        MAX = max(MAX,cnt[i]);
    }
    cout << MAX;
}
