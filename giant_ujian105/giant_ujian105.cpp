#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float ujianAkhir;
	float x;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		ujianAkhir = 0;
		x = 0;
	}

	virtual float hitungNilaiAkhir(int a) { return 0; }
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
		float presen;
		float activ;
		float exer;
		float ua;

		cout << "\nMasukkan nilai Presensi : ";
		cin >> presen;
		setP(presen);

		cout << "\nMasukkan nilai Activity : ";
		cin >> activ;
		setA(activ);

		cout << "\nMasukkan nilai Exercise : ";
		cin >> exer;
		setE(exer);

		cout << "\nMasukkan nilai Ujian Akhir : ";
		cin >> ua;
		setUA(ua);
	}

	float hitungNilaiAkhir(float presen, float activ, float exer, float ua) {
		return (presen * 10 / 100) + (activ * 20 / 100) + (exer * 30 / 100) + (ua * 40 / 100);
	}

	/*
	void cekKelulusan(float presen, float activ, float exer, float ua) {
		if ((presen * 10 / 100) + (activ * 20 / 100) + (exer * 30 / 100) + (ua * 40 / 100) >= 75) {
			cout << "SELAMAT ANDA LULUS";
		}
	}*/
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
		cout << "Nilai Akhir Anda Adalah : " << mk->hitungNilaiAkhir(mk->getP())<< endl;
		cout << "Status Kelulusan : " << endl;
		cout << "====================================================";


		break;

	case 2:
		return 0;
	}
	
	return 0;
}