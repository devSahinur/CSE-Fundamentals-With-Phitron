#include <bits/stdc++.h>
using namespace std;

int main()
{
    int item_code, item_price;
    string name;

    cin >> item_code;
    getchar();
    getline(cin, name);
    cin >> item_price;

    cout << "Item code is: " << item_code << endl;
    cout << "Item name is: " << name << endl;
    cout << "Item price is: " << item_price << endl;
    return 0;
}
