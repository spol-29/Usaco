#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x,u;
        cin >> x >> y;
        vector<int> xs;
        vector<int> ys;
        xs.push_back(x);
        ys.push_back(y);
    }	
    int vertical_answer_coord;
    int horizontal_answer_coord;
    int horizontal_coortdinate;
    int vertical_coordinate;
    int vertical_coord;
    int horizontal_coord; 
    int ans = 0;
    int vertical;
    int horizontal;
    vector<int> horizontalp;
    vector<int> verticalp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                if(xs[i] == xs[j]){
                    vertical++;
                    verticalp.push_back(i*1000+j);
                }else if(ys[i] == ys[j]){
                    horizontal++;
                    horizontalp.push_back(abs(i*1000+j-i-1));
                    horizontal.push_back(i*1000+j); 
                }
            }
        }
    }
}