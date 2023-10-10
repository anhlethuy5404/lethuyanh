#include <bits/stdc++.h>

using namespace std;

int demtu(string s){
    stringstream ss(s);
    int dem=0;
    string tmp;
    while (ss >> tmp){
        dem++;
    }
    return dem;
}

int main (){
	int t;
    cin >> t;
    cin.ignore();
    vector <int> v;
    while (t--){
        string s;
        getline (cin,s);
        v.push_back (demtu(s));
    }
    int k=0;
    for (int i=0; i<v.size(); i++){
        if (v[i]==8 && v[i+1]==7 || v[i]==8 && i==v.size()-1){
            k++;
        }
        if (v[i]==7){
            k++;
            i+=3;
        }
    }
    cout << k << endl;
    for (int i=0; i<v.size(); i++){
        if (v[i]==8 && v[i+1]==7 || v[i]==8 && i==v.size()-1){
            cout << "1" << endl;
        }
        if (v[i]==7){
            cout << "2" << endl;
            i+=3;
        }
    }
}