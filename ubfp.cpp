#include <bits/stdc++.h>
using namespace std;
void area(int bl_x, int bl_y, int tr_x, int tr_y);
void intersect(vector<int> s1, vector<int> s2);
void inter_area(vector<int> s1, vector<int> s2);
void FOR(int n);
void For(int n);
#define pb push_back;
#define mp make_pair;
#define ti tuple<int,int,int>
#define vvi vector<vector<int>>
#define cl ceil
#define fl floor
#define s sort
#define write cout<< 
#define read cin>>
#define end <<"\n";
#define unset unordered_set<int> s;
#define rsz resize
#define cnt count
#define ers erase
#define ins insert
#define For for(int i = 0; i < n; i++)
#define FOR for(int i = 1; i <= n; i++)
#define loop for(int i = 0; i <= n; i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> mi;

void solve(){
    bool fence[101];
    memset(fence, false, sizeof fence);
    int a,b,c,d,count=0;
    read a >> b >> c >> d;
    for(int i = a; a < b; i++){
        fence[i] = true;
    }
    for(int i = c; c < d; i++){
        fence[i] = true;
    }
    for(int i = 0; i <= 101; i++){
        if(fence[i] == true){
            cnt++;
        }
    }write cnt end
}

int main(){
    cin.tie(0);
	ios_base::sync_with_stdio(false);
    solve();
}
 
void area(int bl_x, int bl_y, int tr_x, int tr_y) {
	long long length = tr_y - bl_y;
	long long width = tr_x - bl_x;
	long long area =  length * width;
    write area end
}

void intersect(vector<int> s1, vector<int> s2) {
	int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
	int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];
	if (bl_a_x >= tr_b_x || tr_a_x <= bl_b_x 
			|| bl_a_y >= tr_b_y || tr_a_y <= bl_b_y) {
		write false end
	} else {
		write true end
	}
}

void inter_area(vector<int> s1, vector<int> s2) {
	int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
	int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];

	write ((min(tr_a_x, tr_b_x) - max(bl_a_x, bl_b_x))*(min(tr_a_y, tr_b_y) - max(bl_a_y, bl_b_y))) end
}
