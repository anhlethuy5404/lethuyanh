#include <bits/stdc++.h>

using namespace std;

bool nguyenam (char s){
    if (s=='a' || s=='e' || s=='i' || s=='o' || s=='u' || s=='y') 
        return 1;
    return 0;
}

int main (){
    string s;
    cin >> s;
    for (int i=0; i<s.length(); i++){
        char c=tolower(s[i]);
        if (!nguyenam(c)) cout << "." << c;
    }
}