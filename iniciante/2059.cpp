#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int p, j1, j2, r, a;

int checkWinner();

int main(){
    cout << (checkWinner() == 1 ? "Jogador 1 ganha!" : "Jogador 2 ganha!") << endl;

}

int checkWinner(){
    // Entrada de dados
    cin >> p >> j1 >> j2 >> r >> a; 
    bool par = (j1 + j2) % 2 == 0;
    if( r && a ) return 2;
    if( !r && a ) return 1;
    if( r && !a) return 1;
    if( !r && !a){
        if( par ){
            if( p ){
                return 1;
            } else {
                return 2;
            }
        } else {
            if ( p ){
                return 2;
            } else {
                return 1;
            }
        }
    }
}
