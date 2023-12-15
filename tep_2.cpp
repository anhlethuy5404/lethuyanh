#include <bits/stdc++.h>
using namespace std;

struct Person{
    int code;
    string fname, lname, address,birthday;

};

int main(){
    ifstream fp;
    fp.open("PERSON.DAT");
    string line;
    while(getline(fp, line)){
        Person a;
        istringstream iss(line);
        char c;
        iss >> a.code >> c;
        getline(iss, a.fname, ' ');
        getline(iss, a.lname, ',');
        getline(iss >> ws, a.address, ':');
        getline(iss >> ws, a.birthday);
        cout << a.fname << " " << a.lname << endl;
        cout << "Address: " << a.address << endl;
        cout << "Birthday: " << a.birthday << endl;
    }
    fp.close();
}