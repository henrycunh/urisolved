#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
  int s, t, f;
  cin >> s >> t >> f;
  int sum = s + t + f;
  cout << 
  (
    sum == 24 ? 0 : (
        sum > 24 ? sum % 24 : (
            sum < 0 ? sum + 24 : sum
        )
    )
  );
}
