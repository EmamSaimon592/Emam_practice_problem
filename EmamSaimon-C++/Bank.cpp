#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string holderName;
    int accountNumber;
    double balance;
    string accountType;
    string transactionHistory;

public:
    BankAccount(string name, int accNumber, double initialBalance, string type) {
        holderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        accountType = type;
        transactionHistory = "No transactions yet";
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            logTransaction("Deposited: " + to_string(amount));
            cout << "Successfully deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            logTransaction("Withdrew: " + to_string(amount));
            cout << "Successfully withdrew: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    void displayBalance() const {
        cout << "Current Balance: " << balance << endl;
    }

    void calculateInterest() {
        double interestRate = 0.0;

        if (accountType == "Savings") {
            interestRate = 0.04;
        } else if (accountType == "Current") {
            interestRate = 0.02;
        }

        double interest = balance * interestRate;
        balance += interest;
        logTransaction("Interest applied: " + to_string(interest));

        cout << "Interest of " << interest << " applied to your account." << endl;
    }

    void displayAccountInfo() const {
        cout << "Account Holder: " << holderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        displayBalance();
    }

    void showTransactionHistory() const {
        cout << "Transaction History:\n" << transactionHistory << endl;
    }

private:
    void logTransaction(const string& record) {
        if (transactionHistory == "No transactions yet") {
            transactionHistory = record;
        } else {
            transactionHistory += "\n" + record;
        }
    }
};

int main() {
    string name, type;
    int accNumber;
    double initialBalance;

    cout << "Enter Account Holder's Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accNumber;

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    cout << "Enter Account Type (Savings/Current): ";
    cin >> type;

    BankAccount userAccount(name, accNumber, initialBalance, type);

    int choice;
    double amount;

    while (true) {
        cout << "\n=== Bank Menu ===\n";
        cout << "1. View Account Information\n";
        cout << "2. View Transaction History\n";
        cout << "3. Deposit Funds\n";
        cout << "4. Withdraw Funds\n";
        cout << "5. Apply Interest\n";
        cout << "6. Check Balance\n";
        cout << "7. Exit\n";
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                userAccount.displayAccountInfo();
                break;
            case 2:
                userAccount.showTransactionHistory();
                break;
            case 3:
                cout << "Enter deposit amount: ";
                cin >> amount;
                userAccount.deposit(amount);
                break;
            case 4:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                userAccount.withdraw(amount);
                break;
            case 5:
                userAccount.calculateInterest();
                break;
            case 6:
                userAccount.displayBalance();
                break;
            case 7:
                cout << "Exiting program. Thank you!\n";
                return 0;
            default:
                cout << "Invalid selection. Please try again.\n";
        }
    }

    return 0;
}
