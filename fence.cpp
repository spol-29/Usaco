#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
	int a,b,c,d,count = 0;
	cin >> a >> b >> c >> d;
	bool fence [101];
	for(int i = 0; i < 101; i++){
		fence[i] = false;
	}
	for(int i = a-1; i < b; i++){
		fence[i] = true;
	}
	for(int i = c-1; i < d; i++){
		fence[i] = true;
	}
	for(int i = 0; i < 101; i++){
		if(fence[i] == true){
			count++;
		}
	}
	cout << count-1 << endl;
}