#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fin("paint.in");
	ofstream fout("paint.out");
	int a,b,c,d,e,f;
	cin >> a >> b >> c >> d;
	e = b-a;
	f = d-c;
	cout << f+e-1;
}
