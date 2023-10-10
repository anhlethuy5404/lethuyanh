#include <bits/stdc++.h>

using namespace std;

int main (){
	int t;
    cin >> t;
    cin.ignore();
    string bienso, xe, ravao, ngay;
    int sl;
    map <string, int> m;
    while (t--){
        cin >> bienso >> xe >> sl >> ravao >> ngay;
        if (ravao=="IN"){
            if (xe=="Xe_con"){
                if (sl==5) m[ngay]+=10000;
                else m[ngay] +=15000;
            }
            else if (xe=="Xe_tai") m[ngay] +=20000;
            else if (xe=="Xe_khach"){
                if (sl==29) m[ngay]+=50000;
                else m[ngay] +=70000;
            }
        }
    }
    for (auto it=m.begin(); it!=m.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }
/*
30F-123.15 Xe_con 5 OUT 06/11/2021
30F-123.15 Xe_con 5 IN 06/11/2021
30H-123.15 Xe_con 7 IN 06/11/2021 
29H-222.68 Xe_tai 2 IN 07/11/2021
30G-511.15 Xe_con 5 IN 07/11/2021
*/
}