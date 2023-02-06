#include<bits/stdc++.h>
using namespace std;
int main(){ 
	int n,m,d,s; //n = number of people, m = number of milk, d = number of drinks, s = number of sick people
    cin >> n >> m >> d >> s; //input
    
    for(int i = 0; i < d; i++){ //loop through all drinks
        int p,m,t; //person, milk, time
        cin >> p >> m >> t;
        vector<int> people(d); //people who drank milk
        vector<int> milk(d); //milk drank
        vector<int> time(d); //time drank
        people.push_back(p); //push back person
        milk.push_back(m); //push back milk
        time.push_back(t); //push back time
    }
    vector<int> sick(s); //people who got sick
    vector<int> sicktime(s); //time they got sick
    for(int i = 0; i < s; i++){
        int p,t; //person and time
        cin >> p >> t; //input
        sick.push_back(p); //push back person 
        sicktime.push_back(t); //push back time
    } 
    vector<int> sickmilk; //milk drank by sick people
    for(int i = 0; i < d; i++){
        if(people[i] == sick[i] && time < sicktime[i]){
            sickmilk.push_back(milk[i]);
        }
    }
}
