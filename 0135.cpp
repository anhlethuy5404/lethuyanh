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
//cac so co 3 uoc so la binh phuong so nguyen to
int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i=2; i<=sqrt(n); i++){
            if (snt(i)){
                cout << i*i << " ";
            }
        }
        cout << endl;
    }
}