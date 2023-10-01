#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        char c;
        cin >> c;
        if (c>='A' && c<='Z') {
            c+=32;
            cout << c << endl;
        }
        else if (c>='a' && c<='z') {
            c-=32;
            cout << c << endl;
        }
    }
}