#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    /*
    luas_alas == luas_atap
    luas_sisi_depan == luas_sisi_belakang
    luas_sisi_kanan == luas_sisi_kiri
    luas_permukaan_balok = 2 * (luas_alas + luas_sisi_depan + luas_sisi_kanan);
    */

    float panjang, lebar, tinggi, luas_alas, luas_sisi_depan, luas_sisi_kanan, luas_permukaan_balok;

    cout << "Masukkan Panjang Balok : ";
    cin >> panjang;
    cout << "Masukkan Lebar Balok: ";
    cin >> lebar;
    cout << "Masukkan Tinggi Balok: ";
    cin >> tinggi;
    luas_alas = panjang * lebar;
    luas_sisi_depan = panjang * tinggi;
    luas_sisi_kanan = lebar * tinggi;
    luas_permukaan_balok = 2 * (luas_alas + luas_sisi_depan + luas_sisi_kanan);
    cout << "Luas permukaan balok yaitu: ";
    cout << luas_permukaan_balok << endl;

    return 0;
}
