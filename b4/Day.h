#pragma once
#include <bits/stdc++.h>

using namespace std;

class Day {
private:
    int iNgay, iThang, iNam;
public:
    Day();
    Day(int Ngay, int Thang, int Nam);

    // Quy doi thoi gian ra ngay
    int TinhNgay() const;
    // Quy doi ngay lai thanh thoi gian
    void TinhLaiNgay(int Ngay);

    Day operator + (int Ngay) const;
    Day operator - (int Ngay) const;
    Day operator + (Day other) const;
    Day operator - (Day other) const;

    Day& operator ++ ();
    Day operator ++ (int);
    Day& operator -- ();
    Day operator -- (int);

    bool operator == (Day other) const;
    bool operator != (Day other) const;
    bool operator >= (Day other) const;
    bool operator <= (Day other) const;
    bool operator > (Day other) const;
    bool operator < (Day other) const;

    friend istream & operator >> (istream & is, Day & tg);
    friend ostream & operator << (ostream & os, Day & tg);
};


