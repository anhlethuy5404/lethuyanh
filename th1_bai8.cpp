#include <bits/stdc++.h>

using namespace std;

double diem (double n){
    if (n>=39 && n<=40) return 9.0;
    else if (n>=37 && n<=38) return 8.5;
    else if (n>=35 && n<=36) return 8.0;
    else if (n>=33 && n<=34) return 7.5;
    else if (n>=30 && n<=32) return 7.0;
    else if (n>=27 && n<=29) return 6.5;
    else if (n>=23 && n<=26) return 6.0;
    else if (n>=20 && n<=22) return 5.5;
    else if (n>=16 && n<=19) return 5.0;
    else if (n>=13 && n<=15) return 4.5;
    else if (n>=10 && n<=12) return 4.0;
    else if (n>=7 && n<=9) return 3.5;
    else if (n>=5 && n<=6) return 3.0;
    else if (n>=3 && n<=4) return 2.5;
}

int main (){
	int t;
    cin >> t;
    while (t--){
        double doc, nghe, noi, viet;
        cin >> doc >> nghe >> noi >> viet;
        double tong = (diem(doc) + diem(nghe) + noi + viet) / 4;
        double du=(tong - (int)tong);
        if (du<0.25) cout << (int)tong << ".0" << endl;
        else if (du>=0.25 && du<0.75) cout << (int)tong << ".5" << endl;
        else cout << (int)tong + 1 << ".0" << endl;
    }
}