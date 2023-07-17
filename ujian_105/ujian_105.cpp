// JAWABAN NO 1

#include <iostream>
#include <string>

using namespace std;

const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
string jurusan[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;


void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "\n========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
}

void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa == 0) {
		cout << "Data mahasiswa kosong." << endl;
		return;
	}
	cout << "========== DAFTAR MAHASISWA ==========" << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM     : " << NIM[i] << endl;
		cout << "Nama    : " << nama[i] << endl;
		cout << "Jurusan : " << jurusan[i] << endl;
		cout << "Tahun   : " << tahunMasuk[i] << endl;
		cout << "------------------------------------" << endl;
	}
};


void algorithmacariMahasiswaByNIM() {
	int nimCari;
	cout << "Masukkan NIM yang ingin dicari: ";
	cin >> nimCari;

	int index = -1;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (NIM[i] == nimCari) {
			index = i;
			break;
		}
	}

	if (index != -1) {
		cout << "Data mahasiswa dengan NIM " << nimCari << ":" << endl;
		cout << "NIM     : " << NIM[index] << endl;
		cout << "Nama    : " << nama[index] << endl;
		cout << "Jurusan : " << jurusan[index] << endl;
		cout << "Tahun   : " << tahunMasuk[index] << endl;
	}
	else {
		cout << "Data mahasiswa dengan NIM " << nimCari << " tidak ditemukan." << endl;
	}
};

void algorithmaSortByTahunMasuk() {

	/*cout << "========== MAHASISWA SORTED BY TAHUN MASUK ==========" << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM     : " << NIM[i] << endl;
		cout << "Nama    : " << nama[i] << endl;
		cout << "Jurusan : " << jurusan[i] << endl;	
		cout << "Tahun   : " << tahunMasuk[i] << endl;
		cout << "------------------------------------" << endl;
	}*/
};

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "\nPilihan: ";
		cin >> pilihan;
		cin.ignore();

		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}

		cout << endl;
	} while (pilihan != 5);

	return 0;
}

/*

*** JAWABAN SOAL NO 2 :
		
		Untuk studi kasus diatas, saya mendeklarasikan maksimal mahasiswa 100 dan juga dimana terdapat beberapa method :

		- tambahMahasiswa()
		- tampilkanSemuaMahasiswa()
		- algorithmacariMahasiswaByNIM()
		- algoritmaSortByTahunMasuk()

		dan juga beberapa logika untuk for.

*** JAWABAN SOAL NO 3 :

	PERBEDAAN DARI STACK DAN QUEUE ADALAH =
		
		- STACK	: Menggunakan prinsip LIFO ( Last In First Out ), Jadi jika di ibaratkan adalah kita mencuci piring dengan mempersiapkan 10 piring terlebih dahulu
			dari bawah hingga ke tumpukan atas. Maka saat kita mengambil piring untuk di cuci, maka tumpukkan paling atas (top) adalah yang pertama kali keluar atau terlebih dahulu diambil.
		
		- QUEUE : Menggunakan prinsip FIFO ( First In First Out ), jadi jika di analogikan adalah saat kita mengantri berbeanja di minimarket, maka kita masuk untuk mengantri dari depan,
			lalu orang yang terlebih dahulu mengantri akan di layani atau dengan kata lain yang pertama masuk akan keluar terlebih dahulu, jika ada anak atau orang lain yang mengantri, maka akan mengantri
			di belakang kita.


*** JAWABAN SOAL NO 4 :
	
		Kita harus menggunakan algoritma stack disaat kita ingin menerapkan prinsip LIFO ( Last In First Out ) atau data yang teratas atau yang terakhir merupakan data yang penting, jadi disaat data ingin di proses, maka data top ( data teratas ) akan terlebih 
	dahulu di proses daripada data yang paling bawah.


*** JAWABAN SOAL NO 5 :
	
	a. Kedalaman yang dimiliki struktur tersebut adalah : 4

	b. 
*/

