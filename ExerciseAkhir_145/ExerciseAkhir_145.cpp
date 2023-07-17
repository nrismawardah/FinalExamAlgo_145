#include <iostream>
#include <string>
using namespace std;

//isi disini
const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

struct Node {
	int NIM;
	int tahunMasuk;
	string nama;
};

void tambahMahasiswa()
{
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();

		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};

//isi disini
void tampilkanSemuaMahasiswa() {
	Node* currentNode = START;
	while (currentNode != NULL) {
		cout << "NIM: " << currentNode->NIM << ", Nama: " << currentNode->nama << endl;
		currentNode = currentNode->next;
	}
}

void algorithmacariMahasiswaByNIM()
{
	int ch;
	int ctr;

	do {
		cout << "\n3. Cari Mahasiswa berdasarkan NIM: ";
		int item;
		cin >> item;

		ctr = 0;
		for (n = 0; i < n; i++)
		{
			ctr++;
			if (MAX_MAHASISWA == item)
			{
				cout << "\n" << item << " found at position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << " not found in the array\n";
		cout << "\Continue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

void algorithmaSortByTahunMasuk() {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			//isi disini
			break;
		case 2:
			//isi disini
			break;
		case 3:
			//isi disini
			break;
		case 4:
			//isi disini
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

// Essai
// 2. Algoritma linear search, bubble/selection sort, dan single linked list
// 3. Stack hanya bisa ditambahkan dan dihapus melalui 1 sisi saja. Sedangkan queue, elemennya dapat disisipkan di satu sisi dan dihapus dari sisi lainnya
// 4. Saat data tersebut hanya bisa diakses melalui satu sisi saja
// 5a. 5 level
// 5b. Preorder traversal dibaca mulai dari membaca root, lalu left subtree, lalu terakhir membaca right subtree nya