#include <bits/stdc++.h>

using namespace std;

void chuanHoa (string &s){
    s[0]=toupper(s[0]);
    for (int i=1; i<s.length(); i++){
        s[i]=tolower(s[i]);
    }
}

int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        string s, tmp;
        vector <string> v;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> tmp){
            v.push_back(tmp);
        }
        for (int i=0; i<v.size(); i++){
            chuanHoa(v[i]);
        }
        if(n==1){
            cout << v[v.size()-1] << " ";
            for (int i=0; i<v.size()-1; i++){
                cout << v[i] << " ";
            }
        }
        else{
            for(int i=1; i<v.size(); i++){
                cout << v[i] << " ";
            }
            cout << v[0] << " ";
        }
        cout << endl;
    }
}