#include <bits/stdc++.h>

using namespace std;

int main (){
	int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        int a[10000];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int x=a[0], k=0;
        for (int i=1; i<n; i++){
            if (a[i] > a[k]) k=i;
        }
        n++;
        for (int i=n-1; i>k; i--){
            a[i]=a[i-1];
        }
        a[k]=m;
        for (int i=0; i<n; i++){
            if (a[i] < 0) cout << a[i] << " ";
        }
        for (int i=0; i<n; i++){
            if (a[i]>=0) cout << a[i] << " ";
        }
        cout << endl;
    }
}