#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>

using namespace std;
string removeNum(string str, string num){
    string res = "";
    int len = strlen(str.c_str());
    for(int i = 0; i < len; i++){
        if(str[i] != num[0])
            res += str[i];
    }
    return res;
}
string trim(string str){
    string res = "";
    int len = strlen(str.c_str());
    int count = 0;
    for(int i = 0; i < len; i++){
        if(str[i] == '0') 
            count++;
        else 
            break;
    }
    // cout << "count " << count; 
    if(count != len){
        for(int i = count; i < len; i++){
            res += str[i];
        }
    } else {
        res = "0";
    }
    return res;
}
int main(){
    string d;
    string num;
    while(cin >> d >> num){
        if(d == "0") break;
        cout << trim(removeNum(num, d)) << endl;
    }


}