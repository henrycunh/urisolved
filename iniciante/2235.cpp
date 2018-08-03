#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    printf("%s\n", a + b >= c && b + c >= a && c + a >= b ? "S" : "N");
}