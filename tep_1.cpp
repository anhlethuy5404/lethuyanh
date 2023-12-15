#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5];
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    ofstream fp1;
    fp1.open ("INTERGER.DAT");
    for(int i=0; i<5; i++){
        fp1 << a[i] << " ";
    }
    fp1.close();
    int r;
    ifstream fp2;
    fp2.open ("INTERGER.DAT");
    while(fp2 >> r){
        cout << r << " ";
    }
    fp2.close();
}