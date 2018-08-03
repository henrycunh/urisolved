#include <iostream>
#include <string>
 
using namespace std;
 
int main() {

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string linha;
        cin >> linha;
        size_t sz;
        int soma =
            stoi(linha.substr(2, 2)) +
            stoi(linha.substr(5, 3)) +
            stoi(linha.substr(11,2));
        cout << soma << endl;
    }
 
    return 0;
}