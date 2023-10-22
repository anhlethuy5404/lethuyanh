#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int sum=0;
        for (int i=0; i<s.length(); i++){
            if (s[i]>='0' && s[i]<='9'){
                int j=i+1;
                while(s[j]>='0' && s[j]<='9'){
                    j++;
                }
                string tmp=s.substr(i, j-i);
                sum+=stoi(tmp);
                i=j;//skip qua ca so. vd: abc123 -> neu khong thi i bd chay tu so 2 trong vong lap moi
            }
        }
        cout << sum << endl;
    }
}