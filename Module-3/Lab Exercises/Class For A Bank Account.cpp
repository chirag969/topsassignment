#include <iostream>
using namespace std;
class BankAccount {
private:
    double balance; 
public:
    BankAccount(double initialBalance = 0) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            cout << "Invalid initial balance! Setting to 0." << endl;
            balance = 0;
        }
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

main(){
    BankAccount acc1(1000);

    cout << "Initial Balance: " << acc1.getBalance() << endl;

    acc1.deposit(500);  
    cout << "Current Balance: " << acc1.getBalance() << endl;

    acc1.withdraw(300); 
    cout << "Current Balance: " << acc1.getBalance() << endl;

    acc1.withdraw(1500); 
}

