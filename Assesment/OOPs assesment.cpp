#include <iostream>
#include <ctime>  // for date and time
using namespace std;
class ATM {
private:
    int pin;                    
    double balance;            
    double initial_balance;     

public:
    // Constructor
    ATM() {
        pin = 12345;            // default PIN
        initial_balance = 60000; // initial total balance
        balance = 20000;         // current balance in ATM
    }

    // Function to display current date and time
    void displayDateTime() {
        time_t now = time(0); // get current system time
        char* dt = ctime(&now);
        cout << "Date & Time: " << dt << endl;
    }

    // Function to display welcome screen
    void welcomeScreen() {
        cout << "=====================================\n";
        cout << "        Welcome to BANK OF BARODA ATM      \n";
        cout << "=====================================\n";
        displayDateTime();
        cout << "\n1. Enter ATM PIN\n";
        cout << "\n2. Help\n";
        cout << "\n3. Exit\n";
        cout << "-------------------------------------\n";
    }

    // Function to display help screen
    void helpScreen() {
        cout << "\n===== HELP SCREEN =====\n";
        cout << "1. Insert your ATM Card properly.\n";
        cout << "2. Enter your ATM PIN (Default: 12345).\n";
        cout << "3. You can perform Deposit, Withdrawal, or Balance Check.\n";
        cout << "4. Ensure your transaction is complete before exiting.\n";
        cout << "========================\n\n";
    }

    // Function to validate PIN (only one attempt)
    bool validatePIN() {
        int enteredPin;
        cout << "\nEnter your ATM PIN: ";
        cin >> enteredPin;
        if (enteredPin == pin) {
            cout << "\nPIN Verified Successfully!\n";
            return true;
        } else {
            cout << "\nIncorrect PIN! Exiting the System...\n";
            return false;
        }
    }

    // Function to display main menu (after login)
    void mainMenu() {
        int choice;
        do {
            cout << "\n========== MAIN MENU ==========\n";
            cout << "1. Deposit Money\n";
            cout << "2. Withdraw Money\n";
            cout << "3. Check Balance\n";
            cout << "4. Exit\n";
            cout << "================================\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    deposit();
                    break;
                case 2:
                    withdraw();
                    break;
                case 3:
                    checkBalance();
                    break;
                case 4:
                    cout << "\nThank you for using  BANK OF BARODA ATM!\n";
                    break;
                default:
                    cout << "\nInvalid Choice! Please Try Again.\n";
            }
        } while (choice != 4);
    }

    // Function to deposit money
    void deposit() {
        double amount;
        cout << "\nEnter the amount to deposit: Rs. ";
        cin >> amount;
        balance += amount;
        cout << "----------------------------------------\n";
        cout << "Deposit Successful!\n";
        cout << "Initial Balance: Rs. " << initial_balance << endl;
        cout << "Deposited Amount: Rs. " << amount << endl;
        cout << "Present Account Balance: Rs. " << balance << endl;
        cout << "----------------------------------------\n";
    }

    // Function to withdraw money
    void withdraw() {
        double amount;
        cout << "\nEnter the amount to withdraw: Rs. ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "----------------------------------------\n";
            cout << "Withdrawal Successful!\n";
            cout << "Amount Withdrawn: Rs. " << amount << endl;
            cout << "Remaining Balance: Rs. " << balance << endl;
            cout << "----------------------------------------\n";
        } else {
            cout << "\n----------------------------------------\n";
            cout << "Unsuccessful Withdrawal!\n";
            cout << "Reason: Insufficient Balance.\n";
            cout << "Your Current Balance: Rs. " << balance << endl;
            cout << "----------------------------------------\n";
        }
    }

    // Function to check balance
    void checkBalance() {
        cout << "\n=====================================\n";
        cout << "Your Current Account Balance is: Rs. " << balance << endl;
        cout << "=====================================\n";
    }
};

// Using Scope Resolution Operator to define main() separately
int main() {
    ATM atm;  // create object of ATM class

    int choice;
    atm.welcomeScreen(); // show welcome screen

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            if (atm.validatePIN()) {
                atm.mainMenu();
            } else {
                cout << "Program Terminated.\n";
            }
            break;
        case 2:
            atm.helpScreen();
            break;
        case 3:
            cout << "\nThank you! Visit Again.\n";
            break;
        default:
            cout << "\nInvalid Choice! Exiting...\n";
    }

    return 0;
}

