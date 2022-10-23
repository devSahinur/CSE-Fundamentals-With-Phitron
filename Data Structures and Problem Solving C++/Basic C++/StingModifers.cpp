#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st = "abcdefghij";
    string st2 ="xyz";
    // st.assign("xyz");
    // st+=st2;
    // st.append(st2);
    st.push_back('s');
    st.pop_back();
    cout << st << endl;

    return 0;
}