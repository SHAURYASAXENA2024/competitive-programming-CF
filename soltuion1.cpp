#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    string s[t];
    for(int i=0; i<t; i++){
        getline(cin,s[i]);
    }
    for(int i=0; i<t; i++){
        for(char &ch:s[i]){
            if(ch>='a' && ch <='z'){
                ch=ch-32;
            }
        }
    }
    for(int i=0; i<t; i++){
        if(s[i]=="YES"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}