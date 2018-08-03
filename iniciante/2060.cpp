#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int multiples[4];

void checkNumber(int num);

int main(){
    int n;
    cin >> n;
    int numbers[n];
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
        checkNumber(numbers[i]);
    }
    for(int i = 0; i < 4; i++){
        printf("%d Multiplo(s) de %d\n", multiples[i], i+2);
    }

}

void checkNumber(int num){
    if(num % 2 == 0) multiples[0]++;
    if(num % 3 == 0) multiples[1]++;
    if(num % 4 == 0) multiples[2]++;
    if(num % 5 == 0) multiples[3]++;
}

