#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

string players[2];
int choice[2];
string resultLabels[] = {"Jogador 1 venceu", "Jogador 2 venceu", "Ambos venceram", "Sem ganhador", "Aniquilacao mutua"};
string result;

int getMove(string str);
void readData();
int defineMatch(int player_1, int player_2);

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    readData();
    cout << result << endl;
  }

}

int getMove(string str){
  if(str.compare("ataque") == 0)
    return 1;
  else if(str.compare("pedra") == 0)
    return 2;
  else if(str.compare("papel") == 0)
    return 3;
}

void readData(){
  cin >> players[0];
  cin >> players[1];
  choice[0] = getMove(players[0]);
  choice[1] = getMove(players[1]);
  result = resultLabels[defineMatch(choice[0], choice[1]) - 1];
}

int defineMatch(int player_1, int player_2){
  /* 
    Possíveis saídas
      1:  Jogador 1 venceu
      2:  Jogador 2 venceu
      3:  Ambos venceram
      4:  Sem ganhador
      5:  Aniquilação Mútua
  */
  if(player_1 == 1){
    if(player_2 == 3)
      return 1;
    else if(player_2 == 2) 
      return 1;
    else if(player_2 == 1) 
      return 5;
  } else if(player_1 == 2){
    if(player_2 == 3)
      return 1;
    else if(player_2 == 2)
      return 4;
    else if(player_2 == 1)
      return 2;
  } else if(player_1 == 3){
    if(player_2 == 1)
      return 2;
    else if(player_2 == 2)
      return 2;
    else if(player_2 == 3)
      return 3;
  }
}
