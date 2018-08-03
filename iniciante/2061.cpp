#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  for(int i = 0; i < m; i++)
  {
    string input;
    cin >> input;
    if(input == "fechou") n++;
    else n--;
  }
  cout << n << endl;
}
