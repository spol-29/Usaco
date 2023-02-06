#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("outofplace.in", "r", stdin);
	freopen("outofplace.out", "w", stdout);
	int n;
	cin >> n;
	int adjacent = n/2;
	int cows[100], sorted[100];
	for (int i = 0; i < n; i++){
		cin >> cows[i];
		sorted[i] = cows[i];
	}
	sort(sorted, sorted + n);
	int swaps = 0;
	for (int i = 0; i < n; i++){
		if (cows[i] != sorted[i]){
			swaps++;
		}
	}
	cout << swaps - 1;
}