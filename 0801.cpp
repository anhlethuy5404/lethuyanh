#include <bits/stdc++.h>
using namespace std;

int main(){
	ofstream infile;
    infile.open("PTIT.in");
    string s;
    getline(cin, s);
    infile.close();
    ifstream input_file ("PTIT.in");
    ofstream output_file ("PTIT.out");
    string str;
    while(getline(input_file, str)){
        output_file << str << endl;
    }
    input_file.close();
    output_file.close();
}