#include <iostream>
using namespace std;

class BankAccount {
    // Data members
public:
    string depositorName;
    int accNumber;
    float balance; // Changed initialBalance to balance

    // Constructor
    BankAccount(string depositorName, int accNumber, float initialBalance) {
        this->depositorName = depositorName; // Use 'this' pointer to avoid confusion
        this->accNumber = accNumber;
        this->balance = initialBalance; // Changed to balance
    }

    // Member functions
    void deposit(float amount);
    void withdraw(float amount);
    void displayDetails(); // Corrected display function name
};

void BankAccount::deposit(float amount) {
    balance += amount;
    cout << "You've deposited Rs " << amount << ". Your new balance is: " << balance << endl;
}

void BankAccount::withdraw(float amount) {
    balance -= amount;
    cout << "You've withdrawn Rs " << amount << ". Your new balance is: " << balance << endl;
}

void BankAccount::displayDetails() {
    cout << "Hey " << depositorName << ". Your balance is: " << balance << endl;
}

int main() {
    BankAccount account1("Ishaan", 12345, 5000.0); 
    account1.displayDetails();

    account1.deposit(1500); 
    account1.withdraw(700);    
    account1.displayDetails();

    return 0;
}