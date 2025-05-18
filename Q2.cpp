#include <iostream>
using namespace std;
class BankAccount {
public:
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void displayBalance() const = 0;
    virtual ~BankAccount() = default;
};
class SavingsAccount : public BankAccount {
private:
    string accountNumber;
    double balance;
    double interestRate;
public:
    SavingsAccount(string accNum, double rate) : accountNumber(accNum), balance(0), interestRate(rate) {}
    void deposit(double amount) override {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance for withdrawal." << endl;
        }
    }
    void displayBalance() const override {
        cout << "Savings Account Balance: $" << balance << endl;
    }
};
class CheckingAccount : public BankAccount {
private:
    string accountNumber;
    double balance;
public:
    CheckingAccount(string accNum) : accountNumber(accNum), balance(0) {}
    void deposit(double amount) override {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance for withdrawal." << endl;
        }
    }
    void displayBalance() const override {
        cout << "Checking Account Balance: $" << balance << endl;
    }
};
class FixedDepositAccount : public BankAccount {
private:
    string accountNumber;
    double principal;
    double interestRate;
    int maturityMonths;
public:
    FixedDepositAccount(string accNum, double principalAmount, double rate, int months)
        : accountNumber(accNum), principal(principalAmount), interestRate(rate), maturityMonths(months) {}
    void deposit(double) override {
        cout << "Fixed deposit account: Cannot deposit additional funds." << endl;
    }
    void withdraw(double) override {
        cout << "Fixed deposit account: Cannot withdraw before maturity." << endl;
    }
    void displayBalance() const override {
        double maturityValue = principal * (1 + interestRate);
        cout << "Fixed Deposit Account Balance: $" << maturityValue << endl;
    }
};
int main() {
    BankAccount* accounts[3];
    accounts[0] = new SavingsAccount("SA123", 0.05);
    accounts[1] = new CheckingAccount("CA456");
    accounts[2] = new FixedDepositAccount("FDA789", 1000.0, 0.08, 12);
    for (int i = 0; i < 3; ++i) {
        accounts[i]->deposit(1000.0);
        accounts[i]->withdraw(500.0);
        accounts[i]->displayBalance();
        cout << endl;
    }
    for (int i = 0; i < 3; ++i) {
        delete accounts[i];
    }
    return 0;
}