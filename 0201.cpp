#include <iostream>

using namespace std;

int min (int a, int b){
    if (a<b) return a;
    return b;
}

void sort (int a[100], int n){
    for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i]>a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,n);
        int r=1e9;
        for (int i=0; i<n-1; i++){
            r=min (r, a[i+1]-a[i]);
        }
        cout << r << endl;
    }
}