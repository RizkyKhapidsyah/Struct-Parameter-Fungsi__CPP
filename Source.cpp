#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

typedef struct {
	int bil1;
	int bil2;
} data_bilangan;

void tampil_bilangan(data_bilangan bilangan) {
	cout << "Bilangan Pertama   = " << bilangan.bil1 << endl;
	cout << "Bilangan Kedua     = " << bilangan.bil2 << endl;
}

int main() {
	cout << "===============================" << endl;
	cout << "Struct Sebagai Parameter Fungsi" << endl;
	cout << "===============================" << endl;

	data_bilangan bilangan;

	cout << "Masukkan Bilangan Pertama   : "; cin >> bilangan.bil1;
	cout << "Masukkan Bilangan Kedua     : "; cin >> bilangan.bil2;
	cout << endl;
	
	tampil_bilangan(bilangan);
	cout << endl;

	_getch();
	return 0;
}