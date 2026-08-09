// Bank Account
// Private members: accountNumber, balance.
// Public methods: deposit(), withdraw(), getBalance().
// Prevent withdrawal if the amount exceeds the balance.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
        string accountNumber;
        int balance;

    public: 
        BankAccount (string accNo, int bal) : accountNumber(accNo), balance(bal) {}
        
        string getAccNo() const {
            return accountNumber;
        }

        int getBalance() const {
            return balance;
        }

        void deposit(int amount) {
            if (amount > 0) {
                balance += amount;
            } else {
                cout << "Amount must be positive!" << endl;
            }
        }

        void withdraw(int amount) {
            if (amount > balance) {
                cout << "Insufficient Funds!" << endl;
            } else if (amount < 0) {
                cout << "Amount must be positive!" << endl;
            } else {
                balance -= amount;
                cout << amount << "$ withdrawn successfully!" << endl;
            }
        }
};

int main() {
    BankAccount b("ABC1234Z", 25000);

    cout << "Account Number: " << b.getAccNo() << endl;
    cout << "Balance: " << b.getBalance() << endl;
    b.withdraw(3000);
    cout << "Balance: " << b.getBalance() << endl;
    b.deposit(10000);
    cout << "Balance: " << b.getBalance() << endl;

    return 0;
}