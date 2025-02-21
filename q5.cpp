//#include <iostream>
//#include <string>
//using namespace std;
//
//class BankAccount {
//private:
//    string Account_Holder_Name;
//    int Account_Number;
//    double balance;
//
//public:
//    void InitializeAccount() {
//        cout << "Enter account holder name ";
//        getline(cin, Account_Holder_Name);
//        cout << "Enter account number ";
//        cin >> Account_Number;
//        cout << "Enter initial balance ";
//        cin >> balance;
//    }
//
//    void deposit(double amount) {
//        balance += amount;
//        cout << "New Balance " << balance << endl;
//    }
//
//    void withdraw(double amount) {
//        if (amount <= balance) {
//            balance -= amount;
//            cout << "New Balance " << balance << endl;
//        }
//        else {
//            cout << "Insufficient balance...! " << endl;
//        }
//    }
//
//    void displayAccountDetails() {
//        cout << "*****Account Details***** " << endl;
//        cout << "Name " << Account_Holder_Name << endl;
//        cout << "Account Number " << Account_Number << endl;
//        cout << "Balance " << balance << endl;
//    }
//};
//
//int main() {
//    BankAccount account;
//    account.InitializeAccount();
//
//    double depositAmount;
//    cout << "Deposit Amount ";
//    cin >> depositAmount;
//    account.deposit(depositAmount);
//
//    double withdrawAmount;
//    cout << "Withdraw Amount ";
//    cin >> withdrawAmount;
//    account.withdraw(withdrawAmount);
//
//    account.displayAccountDetails();
//
//    return 0;
//}