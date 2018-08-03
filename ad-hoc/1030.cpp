#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int kill(int n, int k){
	return n == 1 ? 1 : (kill(n - 1, k) + k - 1) % n + 1;
}

// 5 3
// 

int main(){
	int c, n, k;
	cin >> c;
	for(int i = 0; i < c; i++){
		cin >> n >> k;
		printf("Caso %d: %d\n", i + 1, kill(n, k));
	}
}