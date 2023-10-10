#include <bits/stdc++.h>

using namespace std;

struct Student {
    string maSV;
    string hoTen;
    float diem1, diem2;
};

void nhap (Student &st){
        cin >> st.maSV;
        cin.ignore();
        getline (cin, st.hoTen);
        cin >> st.diem1;
        cin >> st.diem2;
}

void xuat (Student st){
    cout << st.maSV << " " << st.hoTen << " " << st.diem1 << " " << st.diem2 << endl;
}

bool cmpName (Student st1, Student st2){
    return st1.hoTen < st2.hoTen;
}

int main (){
    int n;
    cin >> n;
    Student st[n];
    for (int i=0; i<n; i++){
        cout << "Sinh vien thu " << i+1 << endl;
        nhap(st[i]);
    }
    cout << "Danh sach sinh vien diem C++ >= 7.0" << endl;
    for (int i=0; i<n; i++){
        if(st[i].diem2 >= 7.0)
            cout << st[i].hoTen << endl;
    }
    sort (st, st+n, cmpName);
    cout << "Danh sach da sap xep:" << endl;
    for (int i=0; i<n; i++){
        xuat (st[i]);
    }
}
/*
3
B21
Le Thuy Anh
7.7 5.6
B77
Nguyen Hoa Le
7.8 9.6
B11
Nguyen Hieu Quang
7.4 8.8
*/