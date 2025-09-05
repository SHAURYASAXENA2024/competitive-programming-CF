// Soltuion to problem 1926A
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    string s[t];
    for(int i=0; i<t; i++){
        getline(cin,s[i]);
    }
    vector<int> a(t, 0), b(t, 0); 
    for(int i=0; i<t; i++){
       for(char c:s[i]){
            if(c=='A'){
                a[i]++;
            }
            else if(c=='B'){
                b[i]++;
            }
            else{
                return 0;
            }
       }
    }
    for(int i=0; i<t; i++){
        if(a[i]>b[i]){
            cout << 'A' << endl;
        }
        else{
            cout << 'B' << endl;
        }
    }
    return 0;
}