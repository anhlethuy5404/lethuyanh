#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    int a[n][3];
    for (int i=0; i<n; i++){
        for (int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }
    int dem=0;
    for (int i=0; i<n; i++){
        int dem1=0, dem2=0;
        for (int j=0; j<3; j++){
            if (a[i][j]==1) dem1++;
            else if (a[i][j]==0) dem2++;
        }
        if (dem1 > dem2) dem++;
    }
    cout << dem << endl;
}