#include <bits/stdc++.h>

using namespace std;

struct Student {
    string name;
    string code;
    float score;
};

void readStudent (Student &st){
    getline (cin, st.name);
    cin >> st.code;
    cin >> st.score;
}

void printStudent (Student st){
    cout << st.name << " " << st.code << " " << st.score;
}

int main (){
/*   Student st;
    //st.name = "Nguyen Van A";
    //st.code = "B22DCCN001";
    //st.score = 7.5;
    //printStudent(st);
    readStudent (st);
    Student *pSt = &st;
    pSt->name = "Nguyen Van B";
    printStudent (*pSt);
*/ 
    Student students[10];
    student[0].name = "Nguyen Van A";
    ....
}