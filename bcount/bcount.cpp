#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);
	int n=0,q=0,x=0,a=0,b=0,h=0,g=0,j=0;
	vector<int> ID;
	
	cin >> n >> q;
	for(int i = 1; i <= n; i++){
		cin >> x;
		ID.push_back(x);
	}
	for(int i = 1; i <= q; i++){
		cin >> a >> b;
		for(int i = a-1; i <= b-1; i++){
			if(ID[i] == 1){
				h++;
			}
			if(ID[i] == 2){
				g++;
			}
			if(ID[i] == 3){
				j++;
			}
		}
		cout << h << " " << g << " " << j << endl;
		h=0;
		j=0;
		g=0;
	}
}
