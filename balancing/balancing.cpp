#include<bits/stdc++.h>
using namespace std;

int main() {
	ifstream cin("balancing.in");
    ofstream cout("balancing.out");
	int num;
	int pos;
	cin >> num >> pos;
	vector<int> x(num);
	vector<int> y(num);
	set<int> vertical;
	set<int> horizontal;
	for (int c = 0; c < num; c++) {
		cin >> x[c] >> y[c];
		vertical.insert(x[c] + 1);
		horizontal.insert(y[c] + 1);
	}
	
	int minimum = num;
	for (int v : vertical) {
		for (int h : horizontal) {
			int topleft = 0;
			int topright = 0;
			int bottomleft = 0;
			int bottomright = 0;
			for (int c = 0; c < num; c++) {
				if (x[c] < v && y[c] > h) {
					topleft++;
				} else if (x[c] > v && y[c] > h) {
					topright++;
				} else if (x[c] < v && y[c] < h) {
					bottomleft++;
				} else if (x[c] > v && y[c] < h){
					bottomright++;
				}
			}
			int MAX1 = max(topleft, topright);
            int MAX2 = max(bottomleft,bottomright);
            int MAX3 = max(MAX1,MAX2);
            int MIN = min(minimum, MAX3);
			minimum = MIN;
		}
	}

	cout << minimum << endl;
}