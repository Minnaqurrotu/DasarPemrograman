#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int sum = 0;
    int x;

    cout << "input bil: " << endl;
    cin >> x;
    while(x != 9999){
        cout << x << endl;
        sum = sum + x;
        i = i + 1;

        cout << "input bil: " << endl;
        cin >> x;
    }
    cout << "Jumlah angka= " << sum << endl;
    cout << "Jumlah cacah angka= " << i << endl;
    return 0;
}
