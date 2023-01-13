#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fin("paint.in");
	ofstream fout("paint.out");
	bool fence[101];
	for(int i = 0; i < 101; i++){
		fence[i] = 0;
	}
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	for(int i = a; i<b; i++){
		fence[i] = true;
	}
	for(int i = c; i<d; i++){
		fence[i] = true;
	}
	int cnt = 0;
	for(int i = 0; i < 101; i++){
		if(fence[i] == true){
			cnt++;
		}
	}
	cout << cnt << endl;
	cnt = 0;
}
