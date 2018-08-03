#include <iostream>
using namespace std;

int main(){
	int v, r;
	int notas[] = {100, 50, 20, 10, 5, 2};
	while(1){
		cin >> v >> r;
		if( v == 0 && r == 0 ) break;
		int troco = r - v;
		int qntd_notas = 0;
		for(int i = 0; i < 6 && qntd_notas < 3; i++){
			if(troco >= notas[i]){
				troco -= notas[i];
				qntd_notas++;
			}
		}
		cout << (qntd_notas == 2 ? "possible" : "impossible") << endl; 

	}


}