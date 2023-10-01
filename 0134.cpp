#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int dem=0;
        for (int i=2; i<=sqrt(n); i++){
            if (n%i==0){
                while (n%i==0){
                    dem++;
                    
                    if (dem==k) {
                        cout << i;
                        break;
                    }
                    n/=i;
                }
                
            }
            if (dem==k) break;
            if (n==1) break;
        }
        if (n>1){
            dem++;
            if (dem==k) cout << n;
        }
        if (dem<k) cout << "-1";
        cout << endl;
    }
}