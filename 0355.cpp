#include <bits/stdc++.h>
using namespace std;

string chuanHoa(string s){
    for(int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
    string s;
    vector <string> v;
    while(cin >> s){
        s=chuanHoa(s);
        v.push_back(s);
    }
    bool check = 1;
    for(auto x : v){
        if(check){
            x[0] = toupper(x[0]);
            check=0;
        }
        
        char c = x.back();
        if(c=='.' || c=='?' || c=='!') {
            x.pop_back();
            cout << x << endl;
            check=1;
        }
        else cout << x << " ";
    }
}