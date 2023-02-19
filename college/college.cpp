// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,MAX = 0;
//     cin >> n;
//     vector<int> cowTuitions;
//     vector<int> maxTuitions;
//     for(int i = 0; i < n; i++){
//         int x;
//         cin >> x;
//         cowTuitions.push_back(x);
//     }
//     for(int i = 0; i < n; i++){
//         if(cowTuitions[i] > MAX){
//             MAX = cowTuitions[i];
//         }
//     }
//     for(int i = 1; i <= MAX; i++){

//     }
// }
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    sort(c, c + n);
    long long max_revenue = 0;
    int optimal_tuition = 0;
    for (int tuition = 1; tuition <= 1000000; tuition++) {
        int num_attendees = upper_bound(c, c + n, tuition) - c;
        long long revenue = tuition * num_attendees;
        if (revenue > max_revenue) {
            max_revenue = revenue;
            optimal_tuition = tuition;
        }
    }
    cout << max_revenue << " " << optimal_tuition << endl;
    return 0;
}