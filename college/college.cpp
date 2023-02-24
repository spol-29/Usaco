#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,MAX = 0, cnt_tuition = 0,max_tuition = 0,tuition_cost;
    cin >> n;
    vector<int> a(n);
    vector<int> max_profits(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        MAX = max(MAX, a[i]);
    }
    for(int i = 1; i <= MAX; i++){
        if(a[i] <= i){
            cnt_tuition++;
        }
        max_profits[i-1] = cnt_tuition * i;
        cnt_tuition = 0;
    }
    for(int i = 0; i < n; i++){
        max_tuition = max(max_tuition, max_profits[i]);
        tuition_cost = i+1;
    }
    cout << max_tuition << " " << tuition_cost;
}