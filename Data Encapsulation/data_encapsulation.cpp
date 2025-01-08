#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(string accNum, string accHolder, double initialBalance) {
        this->accountNumber = accNum;
        this->accountHolderName = accHolder;
        this->balance = initialBalance;
    }

    // Method to add money to the account
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << "\n";
    }

    // Method to deduct money from the account
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance for withdrawal of: $" << amount << "\n";
        } else {
            balance -= amount;
            cout << "Withdrew: $" << amount << "\n";
        }
    }

    // Method to display account information
    void getAccountDetails() const {
        cout << "Account Number: " << accountNumber << "\n"
             << "Account Holder: " << accountHolderName << "\n"
             << "Balance: $" << balance << "\n";
    }
};

int main() {
    // Initialize accounts for characters
    BankAccount jethal("001", "Jethal", 1000.0);
    BankAccount bhide("002", "Bhide", 1500.0);
    BankAccount popatal("003", "Popatal", 2000.0);

    // Perform actions
    jethal.deposit(500);
    jethal.withdraw(200);
    jethal.getAccountDetails();

    bhide.deposit(300);
    bhide.withdraw(2000); // Should show insufficient balance
    bhide.getAccountDetails();

    popatal.withdraw(500);
    popatal.getAccountDetails();
}



// #include <iostream>
// #include <cstring>

// using namespace std;

// class BankAccount {
// private:
//     string accountNumber;
//     char* accountHolderName; // Dynamic allocation for account holder name
//     double balance;

// public:
//     // Constructor to initialize account details
//     BankAccount(string accNum, const char* accHolder, double initialBalance) {
//         accountNumber = accNum;
//         accountHolderName = new char[strlen(accHolder) + 1]; // Allocate memory
//         strcpy(accountHolderName, accHolder); // Copy the name
//         balance = initialBalance;
//     }

//     // Destructor to free allocated memory
//     BankAccount() {
//         delete[] accountHolderName; // Free memory
//     }

//     // Method to add money to the account
//     void deposit(double amount) {
//         balance += amount;
//         cout << "Deposited: $" << amount << "\n";
//     }

//     // Method to deduct money from the account
//     void withdraw(double amount) {
//         if (amount > balance) {
//             cout << "Insufficient balance for withdrawal of: $" << amount << "\n";
//         } else {
//             balance -= amount;
//             cout << "Withdrew: $" << amount << "\n";
//         }
//     }

//     // Method to display account information
//     void getAccountDetails() const {
//         cout << "Account Number: " << accountNumber << "\n"
//              << "Account Holder: " << accountHolderName << "\n"
//              << "Balance: $" << balance << "\n";
//     }
// };

// int main() {
//     string accNum;
//     char accHolder[100]; // Buffer for account holder name
//     double initialBalance;

//     // User input for account creation
//     cout << "Enter Account Number: ";
//     cin >> accNum;
//     cout << "Enter Account Holder Name: ";
//     cin.ignore(); // To ignore the newline character left in the buffer
//     cin.getline(accHolder, 100); // Get the full name
//     cout << "Enter Initial Balance: ";
//     cin >> initialBalance;

//     // Create the bank account
//     BankAccount userAccount(accNum, accHolder, initialBalance);

//     // Perform actions
//     double depositAmount, withdrawAmount;

//     cout << "Enter amount to deposit: ";
//     cin >> depositAmount;
//     userAccount.deposit(depositAmount);

//     cout << "Enter amount to withdraw: ";
//     cin >> withdrawAmount;
//     userAccount.withdraw(withdrawAmount);

//     // Display account details
//     userAccount.getAccountDetails();

//     return 0;
// }
