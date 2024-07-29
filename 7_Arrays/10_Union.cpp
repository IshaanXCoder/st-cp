#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> UnionThem(int n, int arr1[], int m, int arr2[]) {
    set<int> mySet;
    vector<int> myVector;

    // Insert elements of arr1 into the set
    for (int i = 0; i < n; ++i) {
        mySet.insert(arr1[i]);
    }

    // Insert elements of arr2 into the set
    for (int i = 0; i < m; ++i) {
        mySet.insert(arr2[i]);
    }

    // Copy elements from the set to the vector
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        myVector.push_back(*it);
    }

    return myVector;
}

int main() {
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    vector<int> Union = UnionThem(n, arr1, m, arr2);

    cout << "Union of arr1 and arr2 is: ";
    for (int i = 0; i < Union.size(); ++i) {
        cout << Union[i] << " ";
    }
    cout << endl;

    return 0;
}