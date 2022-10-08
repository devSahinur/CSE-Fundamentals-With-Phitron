#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;

protected:
    int balance;

private:
    string password;

public:
    BankAccount(string account_holder, string address, int age, string password)
    {
        this->account_holder = account_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand() % 1000000 + 100000;
        this->balance = 0;
        cout << "Your account no is " << this->account_number << endl;
    }
    int show_balance(string passwrod)
    {
        if (this->password == passwrod)
        {
            return this->balance;
        }
        else
        {
            return -1;
        }
    }
    void add_money(int amount, string password)
    {
        if (amount < 0)
        {
            cout << "Invalid amount" << endl;
            return;
        }
        if (this->password == password)
        {
            this->balance += amount;
            cout << "Add money successful" << endl;
        }
        else
        {
            cout << "Password didn't match" << endl;
        }
    }

    void deposit_money(int amount, string password)
    {
        if (amount < 0)
        {
            cout << "Invalid amount" << endl;
            return;
        }
        if (this->balance < amount)
        {
            cout << "Insufficient balance" << endl;
            return;
        }
        if (this->password == password)
        {
            this->balance -= amount;
            cout << "Deposit money successful" << endl;
        }
        else
        {
            cout << "Password didn't match" << endl;
        }
    }
    friend class MyCash;
};

class MyCash
{
protected:
    int balance;

public:
    MyCash()
    {
        this->balance = 0;
    }
    void add_money_from_bank(BankAccount *account, int amount, string password)
    {
        if (amount < 0)
        {
            cout << "Invalid amount" << endl;
            return;
        }
        if (account->balance < amount)
        {
            cout << "Insufficient balance" << endl;
            return;
        }
        if (account->password == password)
        {
            this->balance += amount;
            account->balance -= amount;
            cout << "Add money successful" << endl;
        }
        else
        {
            cout << "Password didn't match" << endl;
        }
    }
    int show_balance()
    {
        return balance;
    }
};

BankAccount *create_account()
{
    string account_holder, address, password;
    int age;
    cout << "Create Account" << endl;
    cout << "Enter your name: ";
    cin >> account_holder;
    cout << "Enter your address: ";
    cin >> address;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your password: ";
    cin >> password;
    BankAccount *account = new BankAccount(account_holder, address, age, password);
    return account;
};

int main()
{
    BankAccount *account = create_account();
   
    return 0;
}