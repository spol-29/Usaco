#include<bits/stdc++.h>
using namespace std;
int main(){
	string a[12] = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
    string cow1, born, in, relative, zodiac, year, from, cow2; 
    vector <pair<string, int> > cow1vec;
    vector <string> cow2vec;
    vector <string> zodiacvec;
    vector <string> relativevec;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> cow1 >> born >> in >> relative >> zodiac >> year >> from >> cow2;
        cow1vec.push_back(cow1);
        cow2vec.push_back(cow2);
        zodiacvec.push_back(zodiac);
        relativevec.push_back(relative);
    }
    for(int i = 0; i < n; i++){
        int loc = find(a.begin(), a.end(), zodiacvec[i]);
        
        if(relativevec == "previous"){
            cow1vec.second.push_back(abs(1 - (12-loc)));
        }else if(relativevec == "next"){
            cow1vec.second.push_back(loc 1)
        }
        //if i isn't one and you find a previous name that is used then add distance of that one and the distance of cow2: not implemented
    }
}