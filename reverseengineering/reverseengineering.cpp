#include <bits/stdc++.h>
using namespace std;
void solve(); 
int main() {
	int t; cin >> t;
	while (t--){
        solve();
    }
 }

void solve() {
	int n, m; cin >> n >> m;
	vector<string> inArr(m);
	vector<char> outArr(m);
	vector<bool> passed(m, false);
 	for (int i = 0; i < m; i++) {
		cin >> inArr[i] >> outArr[i];
	}
	while (true) {
		bool ifstatement = false;
		for (int bit = 0; bit < n; bit++) {
			if (ifstatement){
                break;
            }
			for (int value = 0; value <= 1; value++) {
				if (ifstatement){
                    break;
                }
				for (int output = 0; output <= 1; output++) {
					if (ifstatement){
                        break;
                    } 
					bool consistent = true;
					bool oneinput = false;
					for (int tc = 0; tc < m; tc++) {
						if (passed[tc]){
                            continue;
                        }
						if (inArr[tc][bit] == '0' + value) {
							oneinput = true;
							if (outArr[tc] != '0' + output) {
								consistent = false;
							}
						}
					}
					if (consistent && oneinput) {
						ifstatement = true;
						for (int tc = 0; tc < m; tc++) {
							if (passed[tc]){
                                continue;
                            }
							if (inArr[tc][bit] == '0' + value) {
								passed[tc] = true;
							}
						}
					}
				}
			}
		}
		if (!ifstatement){
            break;
        }
	}
 
	bool ok = true;
	for (int i = 0; i < m; i++) {
		if (passed[i] == false) {
			ok = false;
		}
	}
	if (ok == true) {
		cout << "OK" << endl;
	} else {
		cout << "LIE" << endl;
	}
}