#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k;
	char temp;
	vector<vector<char> > pasture;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		cin >> n >> k;
		pasture.resize(n, vector<char>(n));
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> temp;
				pasture[i][j] = temp;
			}
		}
	}
}

//calculate total number of paths and find which ones only change k times