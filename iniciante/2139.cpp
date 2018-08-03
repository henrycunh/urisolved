#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int dias_do_mes[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes, dia, dias = 0;
    cin >> mes >> dia;
    dias = 25 - dia;
    for(int i = mes - 1; i < 11; i++)
        dias += dias_do_mes[i];
    cout >> dias >> endl;



}