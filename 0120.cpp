#include <iostream>
#include <math.h>

using namespace std;

int check (int m, int n, int x, int y){
    int dem=0;
    for (int i=m; i<=n; i++){
        if (i%x==0 || i%y==0) dem++;
    }
    return dem;
}

int main (){
    int t;
    cin >> t;
    while (t--){
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        cout << check(m,n,a,b) << endl;
    }
}