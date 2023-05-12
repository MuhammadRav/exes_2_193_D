#include <iostream>
using namespace std;

int shen[116];
int n;

void input()
{
	while (true) {
		cout << "\nMasukkan jumlah elemen Array : ";
		cin >> n;
		if ((n > 0) && (n <= 116)) {
			break;
		}
		else {
			cout << "\nArray harus memiliki minimal 1 dan maksimal 116" << endl;
		}
	}

	cout << "\nMasukkan elemen Array\n" << endl;
	for (int i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> shen[i];
	}

}

void BinerySearch()
{
	char pilih;
	int angka;

	
		cout << "\nMasukkan elemen yang ingin anda cari : ";
		cin >> angka;

		int rezza = 0;
		int ariya = n - 1;
		int mid = (rezza + ariya) / 2;
		bool found = false;


		while (rezza <= ariya) {
			mid;
			if (shen[mid] == angka) {
				found = true;
				break;
			}
			else if (angka < shen[mid]) {
				ariya = mid - 1;
			}
			else {
				rezza = mid + 1;
			}
		}

		if (found) {
			cout << "Ditemukan";
		}
		else {
			cout << "Tidak ditemukan";
		}
}

int main()
{
	input();
	BinerySearch();
}
