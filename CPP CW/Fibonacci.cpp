#include <iostream>
using namespace std;

int fibonacci(int n) {

    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else

        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;
    return 0;
}