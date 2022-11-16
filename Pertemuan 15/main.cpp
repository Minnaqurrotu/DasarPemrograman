#include <iostream>

using namespace std;

int main()
{
    int uang, harga_permen, jumlah_permen, sisa_uang;

    cout << "Masukkan uang Ardian Rp: ";
    cin >> uang;
    cout << "Berapakah harga permen yang akan dibeli oleh Ardian Rp: ";
    cin >> harga_permen;

    if (harga_permen == 1000) {
        jumlah_permen = 3;
        sisa_uang = uang - (jumlah_permen * harga_permen);
        cout << "Ardian membeli: " << jumlah_permen << "permen" << endl;
        cout << "Sisa uang Ardian adalah Rp: " << sisa_uang;
    }
    else if (harga_permen == 500) {
        jumlah_permen = uang / harga_permen;
        sisa_uang = uang % harga_permen;
        cout << "Ardian membeli: " << jumlah_permen << "permen" << endl;
        cout << "Sisa uang Ardian adalah Rp: " << sisa_uang;
    }
    else if (harga_permen == 300) {
        for(int i = 300; i <= uang; i = i + 300) {
            cout << i << " ";
        }
        jumlah_permen = uang / harga_permen;
        sisa_uang = uang % harga_permen;
        cout << endl;
        cout << "Ardian membeli: " << jumlah_permen << "permen" << endl;
        cout << "Sisa uang Ardian adalah Rp: " << sisa_uang;
    }
    else {
        jumlah_permen = uang / harga_permen;
        sisa_uang = uang - (jumlah_permen * harga_permen);
        cout << "Ardian membeli: " << jumlah_permen << "permen" << endl;
        cout << "Sisa uang Ardian adalah Rp: " << sisa_uang;
    }
    return 0;
}
