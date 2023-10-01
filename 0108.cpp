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

bool giam (int n){
    while (n>9){
        if (n%10 >= (n/10)%10) return 0;
        n/=10;
    }
    return 1;
}

bool tang (int n){
    while (n>9){
        if (n%10 <= (n/10)%10) return 0;
        n/=10;
    }
    return 1;
}

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int dem=0;
        for (int i=pow(10, n-1); i<pow(10, n); i++){
            if (tang(i) || giam (i)){
                if (snt(i))
                    dem++;
            } 
        }
        cout << dem << endl;
    }
}