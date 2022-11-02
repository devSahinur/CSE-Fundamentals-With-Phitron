#include <iostream>
#include <fstream>

using namespace std;

class shopping
{
private:
    int pcode;
    float price;
    float dis;
    string pname;

public:
    void menu();
    void administrator();
    void buyer();
    void edit();
    void rem();
    void list();
    void receipt();
};

void shopping ::menu()
{
m:
    int choice;
    string email;
    string password;

    cout << "\t\t\t\t___________________________________\n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t       Supermarket Main Menu       \n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t___________________________________\n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t|     1) Administrator     |\n";
    cout << "\t\t\t\t|                          |\n";
    cout << "\t\t\t\t|     2) Buyer             |\n";
    cout << "\t\t\t\t|                          |\n";
    cout << "\t\t\t\t|     3) Exit              |\n";
    cout << "\t\t\t\t|                          |\n";
    cout << "\t\t\t\t Please select!";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\t\t\t Please Login \n";
        cout << "\t\t\t Enter Email  \n";
        cin >> email;
        cout << "\t\t\t Password     \n";
        cin >> password;

        if (email = "skmai@gmail.com" &&password = "skmsi")
        {
            administrator();
        }
        else
        {
            cout << "Invalid email/password";
        }
        break;
    case 2:
    {
        buyer();
    }
    case 3:
    {
        exit(0);
    }

    default:
    {
        cout << "Please select from the given options";
    }
    }
    goto m;
}

void shopping ::administrator()
{
m:
    int choice;
    cout << "\n\n\n\t\t\t Administrator menu";
    cout << "\n\t\t\t|_____1) Add the product_____|";
    cout << "\n\t\t\t|____________________________|";
    cout << "\n\t\t\t|_____2) Modify the product__|";
    cout << "\n\t\t\t|____________________________|";
    cout << "\n\t\t\t|_____3) Delete The product__|";
    cout << "\n\t\t\t|____________________________|";
    cout << "\n\t\t\t|_____4) Back to main menu___|";

    cout << "\n\n\t Please enter your choice ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        rem();
        break;
    case 4:
        menu();
        break;

    default:
        cout << "Invalid choice!";
    }
    goto m;
}

void shopping::buyer()
{
m:
    int choice;
    cout << "\t\t\t  Buyer \n";
    cout << "\t\t\t________________\n";
    cout << "                      \n";
    cout << "\t\t\t 1) Buy Product \n";
    cout << "                      \n";
    cout << "\t\t\t 2) Go Back     \n";
    cout << "\t\t\t Enter your choice: ";

    cin >> choice;
    switch (choice)
    {
    case 1:
        receipt() break;
    case 2:
        menu() break;
    default:
        cout << "Invalid choice!";
    }
    goto m;
}

void shopping::add()
{
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;

    cout << "\n\n\t\t\t Add new product";
    cout << "\n\n\t Product code of the product ";
    cin >> pcode;
    cout << "\n\n\t Name of the product ";
    cin >> pname;
    cout << "\n\n\t Price of the product ";
    cin >> price;
    cout << "\n\n\t Discount on product ";
    cin >> dis;

    data.open("database.txt", ios::in);
    if (!data)
    {
        data.open("database.txt", ios::app | ios::out);
        data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
        data.close();
    }
    else
    {
        data >> c >> n >> p >> d;
        while (!data.eof())
        {
            if (c == pcode)
            {
                token++;
            }
            data >> c >> n >> p >> d;
        }
    }
}
