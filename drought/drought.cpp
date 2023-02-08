#include<bits/stdc++.h>
using namespace std;
const double pi = 3.14159265358979323846;
const double e = 2.71828182845904523536;
#define ll long long
#define pb push_back
int main(){
	int n;
    cin >> n;
    for(int t = 0; t < n; t++){
        vector<int> hunger;
        int h;
        cin >> h;
        for(int j = 1; j <= h; j++){
            int a;
            cin >> a;
            hunger.push_back(a);
        }
        unordered_set<ll> count;
        for(int i = 0; i < hunger.size(); i++){
            count.insert(hunger[i]);
        }
        vector<ll> cnt;
        vector<pair<ll, ll> > count_val;
        for(int i = 0; i < count.size(); i++){
            int l = count[i];
            int c = count(hunger.begin(),hunger.end(), l);
            count_val.push_back(l, c);
            
        }
    }	
}

