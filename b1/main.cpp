#include "phanso.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    PhanSo a(1, 1), b(1, 1);
    cin >> a; cin >> b;
    PhanSo Tong = a + b;
    PhanSo Hieu = a - b;
    PhanSo Tich = a * b;
    PhanSo Thuong = a / b;

    if (a <= b)
        cout << "Phan so thu nhat be hon hoac bang phan so thu hai\n";
    if (a >= b)
        cout << "Phan so thu nhat lon hon hoac bang phan so thu hai\n";
    if (a < b)
        cout << "Phan so thu nhat be hon phan so thu hai\n";
    if (a > b)
        cout << "Phan so thu nhat lon hon phan so thu hai\n";
    if (a != b)
        cout << "Hai phan so khac nhau\n";
    if (a == b)
        cout << "Hai phan so bang nhau\n";

    cout << "Tong " << Tong << "\n";
    cout << "Hieu " << Hieu << "\n";
    cout << "Tich " << Tich << "\n";
    cout << "Thuong " << Thuong << "\n";
    return 0;
}
