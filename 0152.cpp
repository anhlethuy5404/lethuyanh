#include <iostream>
#include <math.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int a,m, tmp;
        int kq=0;
        cin >> a >> m;
        for (int i=0; i<m; i++){
            if ((a*i)%m==1){
                kq=1;
                tmp=i;
            }
        }
        if (kq) cout << tmp << endl;
        else cout << "-1" << endl;
    }
}