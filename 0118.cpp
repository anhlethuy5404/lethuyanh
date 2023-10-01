#include <iostream>
#include <math.h>

using namespace std;

int check (int x){
    int res=0; //dem so luong thua so nguyen to
    for (int i=2; i<=sqrt(x); i++){
            int dem=0;
            while (x%i==0){
                dem++;
                x/=i;
            }
            if (dem>1) return 0;
            if (dem==1) res++;
    }
    if (x!=1) res++;
    if (res==3) return 1;
    return 0;
}

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << check(n) << endl;
    }
}