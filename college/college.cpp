// #include<bits/stdc++.h>
// using namespace std;
// void solve();

// void stream(){
//     freopen("college.in", "r", stdin);
//     freopen("college.out", "w", stdout);
// }

// int main(){
//     stream();
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     solve();
// }

// void solve(){
//     int n;
//     cin >> n;
//     int MaxTuition[n];
//     for(int i = 1; i <= n; i++){
//         cin >> MaxTuition[i];
//     }
//     int MAX = 0;
//     for(int i = 0; i < n; i++){
//         MAX = max(MAX, MaxTuition[i]);
//     }
//     int cnt[MAX];
//     fill_n(cnt, MAX, 0);
//     for(int i = 1; i < MAX; i++){
//         for(int j = 0; j < n; j++){
//             if(i <= MaxTuition[j]){
//                 cnt[i]++;
//             }
//         }
//     }
    
//     int tuition[MAX];
//     int maxprofit = 0;
//     fill_n(tuition, MAX, 0); //initialize the array with 0
//     for(int i = 0; i < MAX; i++){
//         tuition[i] = i+1 * cnt[i]; //i+1 is the tuition and cnt[i] is the value at the location of the tution
//         maxprofit = max(maxprofit, tuition[i]); //maxprofit is the max value in the array
//     }
//     for(int i = 0; i < MAX; i++){
//         if(tuition[i] == maxprofit){
//             cout << maxprofit << " " << i+1;
//             break;
//         }
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int, int> > a;

//write scripts to check if they did c++ beginner
//add monthly parent teacher conferences
//they need to opt that they did c++ beginner before
}//sign up form(competitive programming needs to be done after c++ begginer)
/* Commentary & explanation of code(English): solution didn't work but this is the way to solve the problem
only one max profit is possible print the location of the max profit after the max profit
if there are multiple max profits print the one with the lowest tuition(this was specified in the problem)
to find the max profit we can use a max function that checks the current variable with the location in the array
if the current variable is greater than the location in the array we then update the location with the current value at location i
we also needed to initialize the array with 0's so that we can start incremting the values at the location starting from 0
we can use the fill_n function to initialize the array with 0's
in the begining of the program we needed to input the values of the array after we get n's value
can use a for loop to input the values of the array
then checked if the cow can afford the tuition of the college we incremented the value at the location of the tuition
we then multiplied the value at the location of the tuition with the location of the tuition
*/

// Path: Usaco/college/college.cpp