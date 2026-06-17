#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Transaction {
public:
    string type;
    double amount;

    Transaction(string t, double a) {
        type = t;
        amount = a;
    }
};

class Account {
private:
    int accountNumber;
    double balance;
    vector<Transaction> history;

public:
    Account(int accNo, double bal = 0) {
        accountNumber = accNo;
        balance = bal;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
        history.push_back(Transaction("Deposit", amount));
        cout << "Deposit Successful!\n";
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!\n";
            return;
        }

        balance -= amount;
        history.push_back(Transaction("Withdrawal", amount));
        cout << "Withdrawal Successful!\n";
    }

    bool transfer(Account &receiver, double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!\n";
            return false;
        }

        balance -= amount;
        receiver.balance += amount;

        history.push_back(Transaction("Transfer Sent", amount));
        receiver.history.push_back(Transaction("Transfer Received", amount));

        cout << "Transfer Successful!\n";
        return true;
    }

    void showTransactions() {
        if (history.empty()) {
            cout << "No Transactions Found.\n";
            return;
        }

        cout << "\nTransaction History:\n";
        for (auto &t : history) {
            cout << t.type << " : Rs." << t.amount << endl;
        }
    }
};

class Customer {
private:
    string name;
    Account account;

public:
    Customer(string n, int accNo, double bal)
        : account(accNo, bal) {
        name = n;
    }

    string getName() {
        return name;
    }

    Account& getAccount() {
        return account;
    }

    void displayDetails() {
        cout << "\nCustomer Name : " << name;
        cout << "\nAccount Number: "
             << account.getAccountNumber();
        cout << "\nBalance       : Rs."
             << account.getBalance() << endl;
    }
};

int findCustomer(vector<Customer>& customers, int accNo) {
    for (int i = 0; i < customers.size(); i++) {
        if (customers[i].getAccount().getAccountNumber() == accNo)
            return i;
    }
    return -1;
}

int main() {
    vector<Customer> customers;
    int choice;

    do {
        cout << "\n===== BANKING SYSTEM =====\n";
        cout << "1. Create Account\n";
        cout << "2. View Account Details\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Transfer Money\n";
        cout << "6. Transaction History\n";
        cout << "7. Display All Accounts\n";
        cout << "8. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            string name;
            int accNo;
            double balance;

            cout << "Enter Customer Name: ";
            cin >> name;

            cout << "Enter Account Number: ";
            cin >> accNo;

            if (findCustomer(customers, accNo) != -1) {
                cout << "Account Number Already Exists!\n";
                break;
            }

            cout << "Enter Initial Balance: ";
            cin >> balance;

            customers.push_back(Customer(name, accNo, balance));

            cout << "Account Created Successfully!\n";
            break;
        }

        case 2: {
            int accNo;
            cout << "Enter Account Number: ";
            cin >> accNo;

            int index = findCustomer(customers, accNo);

            if (index == -1)
                cout << "Account Not Found!\n";
            else
                customers[index].displayDetails();

            break;
        }

        case 3: {
            int accNo;
            double amount;

            cout << "Enter Account Number: ";
            cin >> accNo;

            int index = findCustomer(customers, accNo);

            if (index == -1) {
                cout << "Account Not Found!\n";
                break;
            }

            cout << "Enter Amount: ";
            cin >> amount;

            customers[index].getAccount().deposit(amount);
            break;
        }

        case 4: {
            int accNo;
            double amount;

            cout << "Enter Account Number: ";
            cin >> accNo;

            int index = findCustomer(customers, accNo);

            if (index == -1) {
                cout << "Account Not Found!\n";
                break;
            }

            cout << "Enter Amount: ";
            cin >> amount;

            customers[index].getAccount().withdraw(amount);
            break;
        }

        case 5: {
            int senderAcc, receiverAcc;
            double amount;

            cout << "Enter Sender Account Number: ";
            cin >> senderAcc;

            cout << "Enter Receiver Account Number: ";
            cin >> receiverAcc;

            int sender = findCustomer(customers, senderAcc);
            int receiver = findCustomer(customers, receiverAcc);

            if (sender == -1 || receiver == -1) {
                cout << "Invalid Account Number!\n";
                break;
            }

            cout << "Enter Amount: ";
            cin >> amount;

            customers[sender]
                .getAccount()
                .transfer(customers[receiver].getAccount(),
                          amount);

            break;
        }

        case 6: {
            int accNo;

            cout << "Enter Account Number: ";
            cin >> accNo;

            int index = findCustomer(customers, accNo);

            if (index == -1)
                cout << "Account Not Found!\n";
            else
                customers[index]
                    .getAccount()
                    .showTransactions();

            break;
        }

        case 7: {
            if (customers.empty()) {
                cout << "No Accounts Available.\n";
                break;
            }

            for (auto &customer : customers) {
                customer.displayDetails();
                cout << "--------------------\n";
            }
            break;
        }

        case 8:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 8);

    return 0;
}