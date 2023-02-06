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



/*
used algorithm of swapping: if the num cows are not equivalent 
to the sorted array then it will output 1 less than the displaced value
for example if the output is 4(swaps) then we would change it to 3
because the original place of bessie is not in its correct spot.
since bessie is not in its correct spot, we would have to swap her once initially
and then swap her 3 times to get her in the correct spot. this creates 4 swaps.
but we only have to swap her 3 times to get her in the correct spot.
that is why we subtract 1 from the output.
we use a for loop to check if the cows are in the correct spot by comparing the cows array
to the sorted array. if they are not in the correct spot then we add 1 to the swaps variable.
the swaps variable is the output.
*/