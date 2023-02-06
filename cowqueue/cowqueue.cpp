#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin("cowqueue.in");
    ofstream cout("cowqueue.out");
	int n, ans = 0;
    cin >> n;
    vector<pair<int,int> > queue;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        queue.push_back(make_pair(a, b));
    }
    sort(queue.begin(), queue.end());
    for(int i = 0; i < n; i++) {
        if(ans < queue[i].first) {
            ans = queue[i].first + queue[i].second;
        } else {
            ans += queue[i].second;
        }
    }
    cout << ans;
}