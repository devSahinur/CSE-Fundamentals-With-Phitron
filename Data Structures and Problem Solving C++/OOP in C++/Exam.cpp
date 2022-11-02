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

    // Restaurant(int food_item_codes, string food_item_names, int food_item_prices, int total_tax)
    // {
    //     this->food_item_codes = food_item_codes;
    //     this->food_item_names = food_item_names;
    //     this->food_item_prices = food_item_prices;
    //     this->total_tax = 0;
    //     cout<<"hello";
    // }
};

// void foodItem(int num)
// {
//     int food_item_codes, food_item_prices;
//     string food_item_names;
//     cin >> food_item_codes;
//     cout << endl;
//     cin >> food_item_names;
//     cout << endl;
//     cin >> food_item_prices;

// }

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
        getline(cin,food_item_names);
        cin >> food_item_prices;
        restaurant[i].food_item_codes = food_item_codes;
        restaurant[i].food_item_names = food_item_names;
        restaurant[i].food_item_prices = food_item_prices;
    }

    for (int i = 0; i < n; i++)
    {
        cout << restaurant[i].food_item_codes << endl;
    }

    return 0;
}