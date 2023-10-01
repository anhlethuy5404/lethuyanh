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
    int n;
    cin >> n;
    while (n--){
        int a;
        cin >> a;
        for (int i=2; i<=(a); i++){
            if (snt(i)==1 && snt (a-i)==1) {
                cout << i << " " << a-i << endl;
                break;
            }
        }
    }
}