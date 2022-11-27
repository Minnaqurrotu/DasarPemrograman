#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int x;
    cout << "input bil: " << endl;
    cin >> x;
    while(x != 9999){
        cout << x << endl;
        i = i + 1;

        cout << "input bil: " << endl;
        cin >> x;
    }
    cout << "Jumlah angka= " << i << endl;
    return 0;
}
