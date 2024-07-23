#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    // Read the size of the array
    cin >> n;
    
    // Declare an array of size n
    int arr[n];
    
    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Initialize a hash array to count frequencies, assuming values are between 0 and 12
    int hash[13] = {0};
    
    // Populate the hash array with frequencies of each number in the input array
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    // •	arr[i] is the value from the input array at index i.
	// •	hash[arr[i]] accesses the index in the hash array corresponding to the value arr[i].
	// •	hash[arr[i]] += 1; increments the count at that index by 1, effectively counting how many times arr[i] appears in the array.
    
    int q;
    // Read the number of queries
    cin >> q;
    
    // Process each query

    // while (q--) is a loop that runs q times, decrementing q with each iteration until it reaches zero.
    while (q--) {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    
    return 0;
}