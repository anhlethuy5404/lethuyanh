#include <bits/stdc++.h>
using namespace std;

//ktra s1 > s2 khong
int kt(string s1, string s2){
    if(s1 < s2) return 0;
    return 1;
}

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
        int nho=0;
        for (int i=s1.length()-1; i>=0; i--){ 
            int tmp;
            if(kt(s1,s2))
                tmp = (s1[i]-'0') - (s2[i]-'0') - nho;
            else tmp = (s2[i]-'0') - (s1[i]-'0') - nho;
            if(tmp < 0){
                nho = 1;
                tmp+=10;
            } 
            else nho = 0;
            s3 = to_string(tmp) + s3;
        }
        cout << s3 << endl;
    }
}