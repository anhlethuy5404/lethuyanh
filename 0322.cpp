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
        int tmp=0;
        for (int i=s1.length()-1; i>=0; i--){ 
            tmp = (s1[i]-'0') + (s2[i]-'0') + tmp;
            s3 = to_string(tmp%10) + s3;
            tmp/=10; //bien nho
        }
        if(tmp > 0) s3 = to_string(tmp) + s3; //vd 12+98=110
        cout << s3 << endl;
    }
}