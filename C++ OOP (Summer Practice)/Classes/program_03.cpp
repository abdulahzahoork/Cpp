// Problem 3: Bank Account

// Create a BankAccount class.

// Private members:

// - Account Number
// - Owner Name
// - Balance

// Functions:

// - deposit()
// - withdraw()
// - displayBalance()

// Don't allow withdrawing more than the available balance.

// Concepts

// Encapsulation
// Member Functions
// Private Data


#include <iostream>
#include <string>
using namespace std;

class BankAccount{

private: 
    string accNo;
    string ownerName;
    int balance;

public: 
    BankAccount(string accNo, string name, int bal): accNo(accNo), ownerName(name), balance((bal < 0)? 0 : bal) {}

    void setAccNo(string accNo) {
        this->accNo = accNo;
    }

    void setName(string name) {
        ownerName = name;
    }

    string getAccNo() const {
        return accNo;
    }

    string getOwnerName() const {
        return ownerName;
    }

    void displayAccountDetails() const {
        cout << "Account ID: " << accNo << endl;
        cout << "Owner name: " << ownerName << endl;
        cout << "Balance: " << balance << endl;
    }

    void displayBalance() const {
        cout << "Balance: " << balance << endl;
    }

    void deposit(int amount) {
        if (amount <= 0) {
            cout << "Amount cannot be zero or negative." << endl;
            return;
        } 

        balance += amount;
        cout << "Deposit Successful!" << endl;
        cout << "Balance: " << balance << endl;
    }

    void withdraw(int amount) {
        if (amount <= 0) {
            cout << "Amount cannot be 0 or negative!" << endl;
            return;
        }
        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
            cout << "Total balance: " << balance << endl;
            return;
        } 

        balance -= amount;
        cout << "Transaction Successful!" << endl;
        cout << "Remaining Balance: " << balance;
    }
};


int main() {
    BankAccount b1("PUPYG9ABC", "Muhammad Abdullah Khan", 2000123);
    b1.displayAccountDetails();

    cout << "\n";
    b1.withdraw(500000);
    cout << "\n";
    b1.deposit(10);
    cout << "\n";
    b1.displayBalance();

    return 0;
}