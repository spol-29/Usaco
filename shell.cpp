#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,a,b,g,hold = 0;
	cin >> n;
	vector<int> shell(3);
	for(int i = 0; i < 3; i++){
		shell[i] = i;
	}
	vector<int> c(3);
	for(int i = 0; i < 3; i++){
		cin >> a >> b >> g;
		a--;
		b--;
		g--;
		swap(shell[a],shell[b]);
		hold = shell[g];
		c[hold]++;
	}
	
}