#include <bits/stdc++.h>
using namespace std;

namespace one
{
    int x=20;
    void fun()
    {
        cout << "I am namespace one" << endl;
    }
}
namespace two
{
    int x=50;
    void fun()
    {
        cout << "I am namespace two" << endl;
    }
}
int main()
{
    cout<<one::x<<endl;
    two::fun();
    return 0;
}