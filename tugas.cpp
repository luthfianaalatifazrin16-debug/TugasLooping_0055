#include <iostream>
using namespace std;

// varable global
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