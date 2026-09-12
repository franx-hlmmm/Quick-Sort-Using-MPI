#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // UBAH ANGKA INI UNTUK MENENTUKAN JUMLAH DATA
    // Cobalah 100000 (Seratus ribu) atau 1000000 (Satu juta)
    int jumlah_data = 100000; 
    
    ofstream file("input.txt");
    
    if (!file) {
        cout << "Gagal membuat file!" << endl;
        return 1;
    }

    // Tulis jumlah elemen di baris pertama
    file << jumlah_data << "\n";
    
    // Inisialisasi seed random
    srand(time(0));
    
    // Looping untuk menghasilkan angka acak dan menulisnya ke file
    for(int i = 0; i < jumlah_data; i++) {
        // Menghasilkan angka acak antara 1 sampai 100.000
        file << (rand() % 100000) + 1 << " "; 
    }
    
    file.close();
    cout << "Berhasil! File input.txt dengan " << jumlah_data << " angka acak telah dibuat." << endl;
    
    return 0;
}