#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  if (a == b)
  {
    int win = 0;
    int Argentina, Brazil;
    char A[5], B[5];
    for (int i = 0; i < 5; i++)
    {
      cin >> A[i];
      if (A[i] == '1')
      {
        Argentina++;
      }
    }
    for (int i = 0; i < 5; i++)
    {
      cin >> B[i];
      if (B[i] == '1')
      {
        Brazil++;
      }
    }
    if (Argentina > Brazil)
    {
      cout << "Argentina";
    }
    else
    {
      cout << "Brazil";
    }
  }
  else
  {
    if (a > b)
    {
      cout << "Argentina";
    }
    else
    {
      cout << "Brazil";
    }
  }

  return 0;
}