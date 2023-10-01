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
    int a,b;
    cin >> a >> b;
    int max=a, min=b;
    if (b>a) {
        min=a;
        max=b;
    }
    for (int i=min; i<max; i++){
        if (snt(i)) cout << i << " ";
    }
}