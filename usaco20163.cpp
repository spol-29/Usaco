#include<bits/stdc++.h>
using namespace std;
int main() {
	// ofstream cout ("cowsignal.out");
	// ifstream cin ("cowsignal.in");
	int n,m,k;
	cin>>m>>n>>k;
    for(int i=0; i<m; i++){
		string s;
		cin>>s;
		for(int t=0; t<k; t++){
	        for(int j=0; j<n; j++){
			    for(int x=0; x<k; x++){
			    	cout<<s[j];
			    }
		    }
		    cout<<endl;	
        }
	