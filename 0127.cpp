#include <iostream>
#include <math.h>
using namespace std;

int snt (int x){
    if (x<2) return 0;
    for (int i=2; i<=sqrt(x); i++){
        if (x%i==0) return 0;
    }
    return 1;
}

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int tmp=0;
        for (int i=2; i<=n/2; i++){
            if (snt(i)==1 && snt (n-i)==1) {
                cout << i << " " << n-i << endl;
                tmp=1;
                break;
            }     
        }
        if (tmp==0) cout << "-1" << endl;
    }
}