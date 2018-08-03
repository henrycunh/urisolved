#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/* Retorna a quantidade de possibilidades dado um intervalo */
int calcularIntervalo(vector<vector<int>> l, int qtd_rep, int num_inst, int target);
/* Retorna a linha em um certo indice de uma matriz */
// int[] pegar_linha(int p[][32], int y, int num_inst);

int main(){
    int casos;
    cin >> casos;
    for(int z = 0; z < casos; z++){
        int num_alunos, num_inst, pos = 0;
        cin >> num_alunos >> num_inst;
        vector<vector<int>> p(num_alunos, vector<int>(num_inst)); // Matriz de prioridades
        // Leitura de dados
        for(int i = 0; i < num_alunos; i++)
            for(int j = 0; j < num_inst; j++)
                cin >> p[i][j];
        // Verifica conflitos da maior prioridade
        for(int i = 0; i < num_alunos; i++){
            int rep = 0; // Repetições
            vector<vector<int>> l;
            for(int j = 0; j < num_inst; j++){
                if(p[j][i] == 1) rep++;
                l.push_back(p[i]);
            }
            if(rep >= 2){
                pos *= calcularIntervalo(p, rep, num_inst, 2); 
            }
        }
    }    
}

int calcularIntervalo(vector<vector<int>> l, int qtd_rep, int num_inst, int target){
    int maior_rep = -1;
    for(int i = 0; i < num_inst; i++){
        int rep = 0;
        for(int j = 0; j < qtd_rep; j++){
            if(l[j][i] == target) rep++;
        }
    }
    return 1;
}

// int[] pegar_linha(int p[][32], int y, int num_inst){
//     int linha[32];
//     for(int i = 0; i < num_inst; i++)
//         linha[i] = p[y][i];
//     return linha;
// }