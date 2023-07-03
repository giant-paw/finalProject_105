#include <iostream>
using namespace std;

class MataKuliah {
public:
	float presensi;
	float activity;
	float exercise;
	float ujianAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		ujianAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() {}
	virtual void input() {}

	/*void setX(int a) {
		this->x = a;	
	}

	void getX() {
		return x;
	}*/

	// presensi
	void setP(float p) {
		this->presensi = p;
	}

	float getP() {
		return presensi;
	}

	// activity
	void setA(float a) {
		this->activity = a;
	}

	float getA() {
		return activity;
	}

	// exercise
	void setE(float e) {
		this->exercise = e;
	}

	float getE() {
		return exercise;
	}

	// ujian Akhir
	void setUA(float ua) {
		this->ujianAkhir = ua;
	}

	float getUA() {
		return ujianAkhir;
	}
};

class Pemrograman : public MataKuliah {
public:
	void input() {

		cout << "\nMasukkan nilai Presensi : ";
		cin >> presensi;

		cout << "\nMasukkan nilai Activity : ";
		cin >> activity;

		cout << "\nMasukkan nilai Exercise : ";
		cin >> exercise;

		cout << "\nMasukkan nilai Ujian Akhir : ";
		cin >> ujianAkhir;
	}

	float hitungNilaiAkhir() {
		return (presensi * 0.1) + (activity * 0.2) + (exercise * 0.3) + (ujianAkhir * 0.4);
	}

	
	void cekKelulusan() {
		if (hitungNilaiAkhir() >= 75) {
			cout << "Selamat Anda Lulus";
		}

		else {
			cout << "Mohon maaf anda tidak lulus";
		}
	}
};

int main() {
	MataKuliah* mk;
	Pemrograman pemro;

	int inputanAwal;
	cout << "Program berhasil dibuat, Pilih menu : " << endl;
	cout << "1. Mulai " << endl;
	cout << "2. Keluar " << endl;
	cout << "\nMasukkan pilihan ( 1 Atau 2 ) : ";
	cin >> inputanAwal;

	switch (inputanAwal)
	{
	case 1:
		mk = &pemro;
		mk->input();

		cout << "\n====================================================\n";
		cout << "Nilai Akhir Anda Adalah : " << mk->hitungNilaiAkhir()<< endl;
		mk->cekKelulusan();
		cout << "====================================================";


		break;

	case 2:
		return 0;
	}
	
	return 0;
}
