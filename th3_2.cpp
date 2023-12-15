#include<bits/stdc++.h>
//#define ll long long
using namespace std;

bool snt(int x){
    if(x < 2) return 0;
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0) return 0;
    }
    return 1;
}
int p[100];
void tao(){
    int i=0, cnt=0;
    while(cnt<100){
        if(snt(i)){
            p[cnt] = i;
            ++cnt;
        }
        ++i;
    }
}

int main(){
    int t;
    cin >> t;
    tao();
    for(int k=1; k<=t; k++){
        int n;
        cin >> n;
        int a[n][n], cnt=0;
        int h1=0, h2=n-1, c1=0, c2=n-1;
        while(h1<=h2 && c1<=c2){
            for(int i=c1; i<=c2; i++){
                a[h1][i] = p[cnt];
                cnt++;
            }
            ++h1;
            for(int i=h1; i<=h2; i++){
                a[i][c2] = p[cnt];
                cnt++;
            }
            --c2;
            if(h1<=h2){
                for(int i=c2; i>=c1; i--){
                    a[h2][i] = p[cnt];
                    cnt++;
                }
                --h2;
            }
            if(c1<=c2){
                for(int i=h2; i>=h1; i--){
                    a[i][c1] = p[cnt];
                    cnt++;
                }
                ++c1;
            }
        }
        cout << "Test " << k << ":\n";
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}