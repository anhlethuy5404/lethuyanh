#include <bits/stdc++.h>
using namespace std;

int main (){
	string s1="ABBADCCABDCCABD";
    string s2="ACCABCDDBBCDDBB";
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        double diem=0;
        if (n==101){
            for (int i=0; i<15; i++){
                char c;
                cin >> c;
                if (c==s1[i]){
                    diem+= 2.0/3;
                }
            }
        }
        else if (n==102){
            for (int i=0; i<15; i++){
                char c;
                cin >> c;
                if (c==s2[i]){
                    diem+= 2.0/3;
                }
            }
        }
        cout << fixed << setprecision(2) << diem << endl;
    }
}