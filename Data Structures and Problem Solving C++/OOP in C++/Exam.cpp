#include <bits/stdc++.h>
using namespace std;
// Restaurant Bill Management app
class Restaurant
{
public:
    int food_item_codes;
    string food_item_names;
    int food_item_prices;
    int total_tax;
    Restaurant()
    {
        this->total_tax = 0;
    }
};


int main()
{
    int n;
    cin >> n;

    Restaurant restaurant[n];
    for (int i = 0; i < n; i++)
    {
        int food_item_codes, food_item_prices;
        string food_item_names;
        cin >> food_item_codes;
        getchar();
        getline(cin, food_item_names);
        cin >> food_item_prices;
        restaurant[i].food_item_codes = food_item_codes;
        restaurant[i].food_item_names = food_item_names;
        restaurant[i].food_item_prices = food_item_prices;
    }

    cout << "... \t\t\t\t  "
         << "MAKE BILL"
         << " \t \t \t... \n";
    cout << " \t\t\t\t "
         << "_______________"
         << " \t\t \t \t\n";
    cout << "Item Code \t\t\t"
         << "Item Name"
         << " \t\t\t\t Item Price ";
    for (int i = 0; i < n; i++)
    {

        cout << endl
             << restaurant[i].food_item_codes << " \t \t\t\t" << restaurant[i].food_item_names << " \t\t \t \t" << restaurant[i].food_item_codes;
    }
    int table_code,total_item;
    cout<<"\nEnter Table No : ";
    cin>>table_code;
    cout<<"Enter Number of Items : ";
    cin>>total_item;
    // for (int i = 0; i < total_item; i++)
    // {
    //     count<<"Enter item"<<i<<"Code : ";
    //     cin
    // }
    

    return 0;
}