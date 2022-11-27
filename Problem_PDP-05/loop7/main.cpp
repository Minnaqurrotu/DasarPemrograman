#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int x;

    cout << "Masukkan nilai: " << endl;
    cin >> x;
    while(x != 9999){
        cout << x << endl;
        sum = sum + x;

    cout << "Masukkan nilai: " << endl;
    cin >> x;
    }
    cout << "Jumlah nilai: " << sum << endl;

    return 0;
}
