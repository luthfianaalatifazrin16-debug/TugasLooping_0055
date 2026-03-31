#include <iostream>
using namespace std;

// Variabel Global
int angkaInput;
int pilihan;

// Function bool untuk mengecek bilangan prima menggunakan while loop
bool cekPrima(int n)
{
    if (n <= 1)
        return false;
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return false;
        i++;
    }
    return true;
}

// Function bool untuk mengecek bilangan fibonacci menggunakan while loop
bool cekFibonacci(int n)
{
    if (n < 0)
        return false;
    int a = 0, b = 1;
    while (b < n)
    {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return (b == n || n == 0);
}

// menerima inputan angka
void inputAngka()
{
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angkaInput;
}

// Fungsi untuk menampilkan menu
int tampilkanMenu()
{
    cout << "\n=== MENU PENGECEKAN BILANGAN ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu (0-2): ";
    cin >> pilihan;
    return pilihan;
}

// menampilkan hasil pengecekan
void tampilkanHasil(bool hasil, string jenis)
{
    if (hasil)
    {
        cout << "Hasil: " << angkaInput << " adalah bilangan " << jenis << endl;
    }
    else
    {
        cout << "Hasil: " << angkaInput << " BUKAN bilangan " << jenis << endl;
    }
}

int main()
{
    // Program terus berjalan menggunakan while loop
    while (true)
    {
        tampilkanMenu();

        // Pengecekan menggunakan switch case
        switch (pilihan)
        {
