#include "ThoiGian.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    ThoiGian a, b;
    cin >> a;
    cin >> b;
    if (a == b)
        cout << "Hai khung gio bang nhau\n";
    if (a != b)
        cout << "Hai khung gio khac nhau\n";
    if (a >= b)
        cout << "Khung gio thu nhat lon hon hoac bang khung gio thu hai\n";
    if (a <= b)
        cout << "Khung gio thu nhat be hon hoac bang khung gio thu hai\n";
    if (a > b)
        cout << "Khung gio thu nhat lon hon khung gio thu hai\n";
    if (a < b)
        cout << "Khung gio thu nhat be hon khung gio thu hai\n";
    ThoiGian Tong = a + b, Hieu = a - b;
    cout << "Tong va hieu cua hai thoi gian\n";
    cout << Tong << '\n';
    cout << Hieu << '\n';
    cout << "Thoi gian thu nhat truoc va sau 30s\n";
    ThoiGian Trc = a - 30, Sau = a + 30;
    cout << Trc << '\n';
    cout << Sau << '\n';
    cout << "Thoi gian thu nhat tinh tien va lui\n";
    a++;
    cout << a << '\n';
    a--; a--;
    cout << a << '\n';
    return 0;
}
