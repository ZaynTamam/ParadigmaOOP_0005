#include <iostream>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printInfo() {
        cout << "Nama Barang: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;
    }
}; // batas kelas

int main() {
    Barang Elektronik;
    Elektronik.nama = "Laptop";
    Elektronik.jumlah = 20;
    Elektronik.kategori = "Elektronik";
    Elektronik.tanggalProduksi = "2022-01-15";
    
    Barang NonElektronik;
    NonElektronik.nama = "Meja";
    NonElektronik.jumlah = 23;
    NonElektronik.kategori = "Non-Elektronik";
    NonElektronik.tanggalProduksi = "2025-02-20";

    Elektronik.printInfo();
    NonElektronik.printInfo();
}