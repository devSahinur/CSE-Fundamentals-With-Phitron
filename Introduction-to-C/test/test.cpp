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

void add_money(BankAccount *account)
{
    string password;
    int amount;
    cout << "Add money" << endl;
    cout << "Enter your password: ";
    cin >> password;
    cout << "Enter amount: ";
    cin >> amount;
    account->add_money(amount, password);
    cout << "Your balance is " << account->show_balance("abc") << endl;
}

void deposit_money(BankAccount *account)
{
    string password;
    int amount;
    cout << "Deposit money" << endl;
    cout << "Enter your password: ";
    cin >> password;
    cout << "Enter amount: ";
    cin >> amount;
    account->deposit_money(amount, password);
    cout << "Your balance is " << account->show_balance("abc") << endl;
}

void add_money_from_bank(MyCash *myCash, BankAccount *account)
{
    string password;
    int amount;
    cout << "Add money from bank" << endl;
    cout << "Enter your password: ";
    cin >> password;
    cout << "Enter amount: ";
    cin >> amount;
    myCash->add_money_from_bank(account, amount, password);
    cout << "Your balance is " << account->show_balance("abc") << endl;
    cout << "MyCash balance is " << myCash->show_balance() << endl;
}

int main()
{
    BankAccount *account = create_account();
    MyCash *myCash = new MyCash();
Flag:
    int choice;
    cout << "Choice option: " << endl;
    cout << "1. Add money" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Add money from bank" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        add_money(account);
        break;
    case 2:
        deposit_money(account);
        break;
    case 3:
        add_money_from_bank(myCash, account);
        break;
    case 4:
        cout << "Exit choice" << endl;
        return 0;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
    goto Flag;
    return 0;
}