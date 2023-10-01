#include <iostream>
#include <math.h>
using namespace std;

int tachso (long long x){
    int chan = 0, le = 0;
    while (x!=0){
        int a=x%10;
        if (a%2==0) ++chan;
        else ++le;
        x/=10;
    }
    if (chan==le) return 1;
    return 0;
}
int main (){
    int n;
    cin >> n;
    int dem=0;
    for (long long i=pow (10, n-1); i< pow (10,n); i++){
        if (tachso (i)==1) {
            
            cout << i << " ";
            dem++;
        }
        if (dem % 10==0) cout << endl;
    }
}