#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct result { int pos; int matches; };
result is_subset(string sub, string seq);

int main(){
    int caso = 1;
    string sub, seq;
    while(cin >> sub >> seq){
        result res = is_subset(sub,seq);
        cout << "Caso #" << caso << ":\n";
        if(res.matches > 0){
            cout << "Qtd.Subsequencias: " << res.matches << "\n";
            cout << "Pos: " << res.pos << "\n\n";
        } else {
            cout << "Nao existe subsequencia\n\n"; 
        }
        
        caso++;
    }


}

result is_subset(string sub, string seq){
    int sub_len = sub.length();
    int seq_len = seq.length();
    int pos = 0;
    int matches = 0;
    for(int i = 0; i < seq_len; i++){
        // printf("\nStep %d", i);
        if(seq.substr(i, sub_len) == sub){
            // printf("\tMatch!");
            pos = i + 1;
            matches++;
        } else {
            // printf("%s != %s\n", seq.substr(i, sub_len).c_str(), sub.c_str());
        }
        // cout << "\t" << seq.substr(i, sub_len) << " " << sub;
    }
    result my_res;
    my_res.pos = pos; 
    my_res.matches = matches;
    return my_res;
}


