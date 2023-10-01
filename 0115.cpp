#include <iostream>
#include <math.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    while (n--){
        int a;
        cin >> a;
        for (int i=2; i<=sqrt (a); i++){
            if (a%i==0){
                int dem=0;
                while (a%i==0){
                    dem++;
                    a/=i;
                }
                cout << i << " " << dem << " ";
            }
            if (a==1) break;
        }
        if (a>1) cout << a << " 1";
        cout << endl;
    }
}