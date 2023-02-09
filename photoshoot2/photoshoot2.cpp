#include <iostream> 
using namespace std; 

int main() 
{ 
    // Number of cows 
    int n; 

    // Array for original order 
    int a[1005]; 

    // Array for desired ordering 
    int b[1005]; 

    // Minimum modifications required 
    int ans = 0; 

    cin >> n; 

    for (int i = 0; i < n; i++) { 
        cin >> a[i]; 
    } 

    for (int i = 0; i < n; i++) { 
        cin >> b[i]; 
    } 

    for (int i = 0; i < n; i++) { 
        // Get the index of current cow in the desired 
        // arrangement, which is stored in 'b[]'. 
        int index = -1; 
        for (int j = 0; j < n; j++) { 
            if (a[i] == b[j]) { 
                index = j; 
                break; 
            } 
        } 

        // If current cow is not in the desired position, 
        // move one by one till we find its position. 
        while (index != i) { 
            swap(a[index], a[index - 1]); 
            index--; 

            // Increment answer. 
            ans++; 
        } 
    } 

    // Print the answer. 
    cout << ans << endl; 
    return 0; 
} 
