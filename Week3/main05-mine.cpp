#include <iostream>
using namespace std;

class Account 
{
    int balance;

    public:
    void initialize(int x){
        balance = x;
    }
    void checkBalance(){
        cout << "Current balance: " << balance << endl;
    }
    void deposit(int amount){
        if (amount < 0) {
            cout << "Invalid amount. Please enter a positive value." << endl;
        } else {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }
    void withdraw(int amount){
        if (amount<0) {
            cout << "Invalid amount. Please enter a positive value." << endl;
        } else
            if (amount > balance) {
            cout << "You dont have enough money." << endl;
            } else {
            balance -= amount;
            cout << "Withdraw: " << amount << endl;
            }
    }
};
int main() {
    Account myAccount;
    int initialBalance;
    cout << "Enter initial balance: ";
    cin >> initialBalance;
    myAccount.initialize(initialBalance);

    char process;

    do {
        cout << "Enter B-Balance, W-Withdraw, D-Deposit, Q-Quit: ";
        cin >> process;

        switch (process) {
            case 'B':
            case 'b':
                myAccount.checkBalance();
                break;
            case 'W':{
            case 'w':
                int withdrawAmount;
                cout << "Enter amount to withdraw: ";
                cin >> withdrawAmount;
                myAccount.withdraw(withdrawAmount);
                break;
            }
            case 'D':{
            case 'd':
                int depositAmount;
                cout << "Enter amount to deposit: ";
                cin >> depositAmount;
                myAccount.deposit(depositAmount);
                break;
            }
            case 'Q':
            case 'q':
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (process != 'Q' && process != 'q');

    return 0;
}