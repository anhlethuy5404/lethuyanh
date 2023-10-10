#include <iostream>
using namespace std;
struct MonHoc {
	int maMH;
	string tenMH;
	int soTC;
	float diemCC;
	float diemKT;
	float diemThi;
	float diemTB;
};
struct SinhVien {
	int maSV;
	string tenSV;
	string lop;
	MonHoc *dsMH;
	float diemTBC;
	int k;
};

MonHoc timMH(MonHoc* dsMH, int n, int maMH) {
	MonHoc ketQua;
	ketQua.maMH = -1;
	for (int i = 0; i < n; i++) {
		if (dsMH[i].maMH == maMH) {
			return dsMH[i];
		}
	}
	return ketQua;
}
int main() {
	int n, m;
	cin >> n;
	cin >> m;
	MonHoc *dsMH = new MonHoc[n];
	SinhVien *dsSV = new SinhVien[m];
	for (int i = 0; i < n; i++) {
		cin >> dsMH[i].maMH;
		cin.ignore();
		getline(cin, dsMH[i].tenMH);
		cin >> dsMH[i].soTC;
	}
//	for (int i = 0; i < n; i++) {
//		cout << dsMH[i].maMH << " -- "
//		<< dsMH[i].tenMH << " -- "
//		<< dsMH[i].soTC << "\n";
//	}
	for (int i = 0; i < m; i++) {
		cin >> dsSV[i].maSV;
		cin.ignore();
		getline(cin, dsSV[i].tenSV);
		getline(cin, dsSV[i].lop);
		int k;
		cin >> k;
		dsSV[i].k = k;
		dsSV[i].dsMH = new MonHoc[k];
		int tongTC = 0;
		float tongDiem = 0;
		for (int j = 0; j < k; j++) {
			int maMH;
			cin >> maMH;
			MonHoc mh = timMH(dsMH, n, maMH);
			dsSV[i].dsMH[j] = mh;
			cin >> dsSV[i].dsMH[j].diemCC;
			cin >> dsSV[i].dsMH[j].diemKT;
			cin >> dsSV[i].dsMH[j].diemThi;
			dsSV[i].dsMH[j].diemTB =
				(dsSV[i].dsMH[j].diemCC * 10
				+ dsSV[i].dsMH[j].diemKT * 20
				+ dsSV[i].dsMH[j].diemThi * 70) / 100;
			tongTC += mh.soTC;
			tongDiem += dsSV[i].dsMH[j].diemTB * mh.soTC;
		}
		dsSV[i].diemTBC = tongDiem / tongTC;
	}
	for (int i = 0; i < m; i++) {
		if (dsSV[i].diemTBC >= 7.0) {
			cout << dsSV[i].maSV << " -- "
			<< dsSV[i].tenSV << " -- "
			<< dsSV[i].lop << " -- "
			<< dsSV[i].diemTBC << endl;
			cout << "Mon:" << endl;
			for (int j = 0; j < dsSV[i].k; j++) {
				cout << dsSV[i].dsMH[j].maMH
				<< " -- " << dsSV[i].dsMH[j].tenMH
				<< " -- " << dsSV[i].dsMH[j].diemTB << endl;
			}
		}
	}
}