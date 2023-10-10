#include <bits/stdc++.h>

using namespace std;

int main (){
	int t;
    cin >> t;
    cin.ignore();
    vector <string> v;
    while (t--){
        string s;
        getline (cin, s);
        v.push_back(s);
    }
    v.push_back("\0");
    cout << v[0] << ": ";
    int k=0;
    for (int i=1; i<v.size()-1; i++){
        if (v[i]!="\0"){
            k++;
        }
        else{
            cout << k << endl;
            k=0;
            cout << v[i+1] <<": ";
            i++;
        }
    }
    cout << k << endl;
}