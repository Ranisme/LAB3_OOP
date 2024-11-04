#include "SoPhuc.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    SoPhuc a, b;
    cin >> a >> b;
    if (a == b)
        cout << "Hai so bang nhau";
    if (a != b)
        cout << "Hai so khac nhau";

    SoPhuc Tong = a + b;
    SoPhuc Hieu = a - b;
    SoPhuc Tich = a * b;
    SoPhuc Thuong = a / b;
    cout << setprecision(2) << fixed;
    cout << "\nTong:" << Tong;
    cout << "\nHieu:" << Hieu;
    cout << "\nTich:" << Tich;
    cout << "\nThuong:" << Thuong;

    return 0;
}
