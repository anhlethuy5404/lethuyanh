#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b, b+n);
        //10 12 20 30 25 40 32 21 35 50 60
        //10 12 20 21 25 30 32 35 40 50 60
        int i=0, j=n-1;
        while(a[i]==b[i]) i++;
        while(a[j]==b[j]) j--;
        cout << i+1 << " " << j+1 << endl;
    }
}