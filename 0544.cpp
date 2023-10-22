#include <bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;

struct DienTich{
    double xA, yA, xB, yB, xC, yC, a, b, c;
    double S, R, St;
    void nhap (){
        cin >> xA >> yA >> xB >> yB >> xC >> yC;
        c = sqrt((xA-xB)*(xA-xB) + (yA-yB)*(yA-yB));
        a = sqrt((xC-xB)*(xC-xB) + (yC-yB)*(yC-yB));
        b = sqrt((xA-xC)*(xA-xC) + (yA-yC)*(yA-yC));
    }
    void xuat (){
        if (a+b <= c || b+c <= a || c+a <=b){
            cout << "INVALID" << endl;
        } else {
            S = 0.25 * sqrt ((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
            R = a * b * c / (4 * S);
            cout << fixed << setprecision(3) << PI * R * R << endl;
        }
    }
};

int main(){
    int n;
    cin >> n;
    struct DienTich s[n];
    for (int i=0; i<n; i++){
        s[i].nhap();
    }
    for (int i=0; i<n; i++){
        s[i].xuat();
    }
}