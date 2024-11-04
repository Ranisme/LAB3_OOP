#include "Day.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    Day a, b;
    cin >> a;
    cin >> b;
    if (a == b)
        cout << "Hai ngay thang bang nhau\n";
    if (a != b)
        cout << "Hai ngay thang khac nhau\n";
    if (a >= b)
        cout << "Ngay thang thu nhat lon hon hoac bang ngay thang thu hai\n";
    if (a <= b)
        cout << "Ngay thang thu nhat be hon hoac bang  ngay thang thu hai\n";
    if (a > b)
        cout << "Ngay thang thu nhat lon hon ngay thang thu hai\n";
    if (a < b)
        cout << "Ngay thang thu nhat be hon ngay thang thu hai\n";
    Day Tong = a + b, Hieu = a - b;
    cout << "Tong va hieu cua hai ngay thang\n";
    cout << Tong << '\n';
    cout << Hieu << '\n';
    cout << "Ngay thang thu nhat truoc va sau 5 ngay\n";
    Day Trc = a - 5, Sau = a + 5;
    cout << Trc << '\n';
    cout << Sau << '\n';
    cout << "Ngay thang thu nhat tinh tien va lui\n";
    a++;
    cout << a << '\n';
    a--; a--;
    cout << a << '\n';
    return 0;
}
