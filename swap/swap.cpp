#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin("swap.in");
    ofstream cout("swap.out");
    int n,k;
    cin >> n >> k;
    int a[n];
    vector<int> start_range;
    vector<int> end_range;
    for(int i = 0; i < n; i++){
        a[i] = i+1;
    }
    for(int i = 0; i < 2; i++){
        int x,y;
        cin >> x >> y;
        start_range.push_back(x);
        end_range.push_back(y);
    }
    for(int i = 0; i < k; i++){
        reverse(a+start_range[0]-1,a+end_range[0]);
        reverse(a+start_range[1]-1,a+end_range[1]);
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }

}