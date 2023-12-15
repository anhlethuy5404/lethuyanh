#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int p[10] = {0};
        //4! = 3!.2.2= 3!.2!.2!
        for(auto x : s){
            if(x=='2') p[2]++;
            else if(x=='3') p[3]++;
            else if(x=='4') p[3]++, p[2]+=2; 
            else if(x=='5') p[5]++;
            else if(x=='6') p[5]++, p[3]++;
            else if(x=='7') p[7]++;
            else if(x=='8') p[7]++, p[2]+=3;
            else if(x=='9') p[7]++, p[2]++, p[3]+=2;
        }
        for(int i=9; i>=2; i--){
            for(int j=1; j<=p[i]; j++){
                cout << i;
            }
        }
        cout << endl;
    }
}