#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2, s3 = "";
        cin >> s1 >> s2;
        while(s1.length() < s2.length()){
            s1 = '0' + s1;
        }
        while(s2.length() < s1.length()){
            s2 = '0' + s2;
        }
        //cout << s1 << " " << s2 << endl;
        int nho=0;
        for (int i=s1.length()-1; i>=0; i--){ 
            int tmp = (s1[i]-'0') + (s2[i]-'0') + nho;
            nho = tmp / 10;
            s3+=to_string(tmp%10);
        }
        //cout << s3 << endl;
        for (int i=s3.length()-1; i>=0; i--){
            cout << s3[i];
        }
        cout << endl;
    }
}