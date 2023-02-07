#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(){
	int n;
    bool ans = false;
    bool cs = false;
    cin >> n;
	vector <string> tree;
    string feature;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        for(int j = 0; j < x; j++){
            cin >> feature;
            tree.pb(feature);
        }
    } 
    for(int i = n; i >= 0; i--){
        for(int j = 0; i < n; i++){
            if(tree[i] == tree[j]){
                cs = true;
            }else{
                continue;
            }
        }
        if(cs == true){
            ans = true;
        }else if(cs == false){
            ans = false;
        }else{
            continue;
        }
    }
    if(ans == true){
        cout << "yes" << endl;
    }else if(ans == false){
        cout << "no" << endl;
    }
}