

#include <bits/stdc++.h>
#include <stdbool.h>
using namespace std;
// Restaurant Bill Management app
class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    float total_tax;
    int order_food_codes[12];
    int order_food_quantity[12];
protected:
    float total_amount;
public:
    Restaurant()
    {
        this->total_tax=0;
        this->total_amount=0;
    }
    float get_total(){
        return total_amount;
    }
    void set_total(int total){
        this->total_amount+=total;
    }
    float get_tax(){
        this->total_tax=(this->total_amount*5)/100;
        this->total_amount+=this->total_tax;
        return total_tax;
    }
};

int main()
{
    Restaurant *restaurant = new Restaurant;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int food_item_codes, food_item_prices;
        string food_item_names;
        cin >> restaurant->food_item_codes[i];
        getchar();
        getline(cin, restaurant->food_item_names[i]);
        cin >> restaurant->food_item_prices[i];
    }

Flag:
    cout << "... \t\t\t\t  "<< "MAKE BILL"<< " \t \t \t... \n";
    cout << " \t\t\t\t "<< "_______________"<< " \t\t \t \t\n";
    cout << "Item Code \t\t\t"<< "Item Name"<< " \t\t\t\t Item Price ";

    for (int i = 0; i < n; i++)
    {

        cout << endl<< restaurant->food_item_codes[i] << " \t \t\t\t" << restaurant->food_item_names[i] << " \t\t \t \t" << restaurant->food_item_prices[i];
    }

    int table_code, total_item;
    cout << "\nEnter Table No : ";
    cin >> table_code;
    cout << "Enter Number of Items : ";
    cin >> total_item;
    for (int i = 0; i < total_item; i++)
    {
        cout<<"Enter item "<<i+1<<" Code : ";
        cin>>restaurant->order_food_codes[i];
        cout<<"Enter item "<<i+1<<" Quantity : ";
        cin>>restaurant->order_food_quantity[i];
    }

    cout << "... \t\t\t\t  "<< "BILL SUMMARY"<< " \t \t \t... \n";
    cout << " \t\t\t\t "<< "_______________"<< " \t\t \t \t\n";
    cout<<"Table No : "<<table_code<<endl;
    cout << "Item Code \t\t"<< "Item Name"<< "\t\t\t Item Price "<< " \t\t Item Quantity "<< " \t Total Price ";

    for (int i = 0; i < total_item; i++)
    {

        int item_price;
        string item_name;
        for (int j = 0; j < 12; j++)
        {
            if(restaurant->order_food_codes[i]==restaurant->food_item_codes[j]){
                item_price=restaurant->food_item_prices[j];
                item_name=restaurant->food_item_names[j];

            }
        }
        restaurant->set_total(item_price*restaurant->order_food_quantity[i]);
        cout << endl<< restaurant->order_food_codes[i] << " \t\t\t" << item_name << " \t \t" << item_price<< " \t \t \t" << restaurant->order_food_quantity[i]<< " \t\t \t" << restaurant->order_food_quantity[i]*item_price;
    }
    cout << endl<< "TAX" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << restaurant->get_tax();
    cout << endl<<"______________________________________________________________________________________________________________";
    cout << endl<< "NET TOTAL" << "\t\t\t\t\t\t\t\t\t\t\t\t" << restaurant->get_total()<<" Taka"<<"\n\n\n"<<endl;
    
    goto Flag;
    return 0;
}