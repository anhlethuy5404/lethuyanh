#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0){
            int dem=0;
            while (n%i==0){
                dem++;
                n/=i;
            }
            cout << i << " " << dem << endl;
        }
        if (n==1) break;
    }
    if (n>1) cout << n << " 1" << endl;
}