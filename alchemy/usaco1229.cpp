#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,k,l,m,x;
    vector<int> metals;
    vector<int> constituents;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        metals.push_back(a);
    }	
    cin >> k;
    for(int i = 1; i <= k; i++) {
        cin  >> l >> m;
        for(int i = 1; i <= m; i++) {
            cin >> x;
            constituents.push_back(x);
        }
        
    }
}
