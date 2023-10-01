#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    if (t<2) cout << "NO" << endl;
    else{
        int kq=1;
        for (int i=2; i<=sqrt (t); i++){
            if (t%i==0) kq=0;
        }
        if (kq) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}