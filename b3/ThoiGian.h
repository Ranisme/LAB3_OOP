#pragma once
#include <bits/stdc++.h>

using namespace std;

class ThoiGian {
private:
    int iGio, iPhut, iGiay;
public:
    ThoiGian();
    ThoiGian(int Gio, int Phut, int Giay);

    // Quy doi thoi gian ra giay
    int TinhGiay() const;
    // Quy doi day lai thanh thoi gian
    void TinhLaiGio(int Giay);

    ThoiGian operator + (int Giay) const;
    ThoiGian operator - (int Giay) const;
    ThoiGian operator + (ThoiGian other) const;
    ThoiGian operator - (ThoiGian other) const;

    ThoiGian& operator ++ ();
    ThoiGian operator ++ (int);
    ThoiGian& operator -- ();
    ThoiGian operator -- (int);

    bool operator == (ThoiGian other) const;
    bool operator != (ThoiGian other) const;
    bool operator >= (ThoiGian other) const;
    bool operator <= (ThoiGian other) const;
    bool operator > (ThoiGian other) const;
    bool operator < (ThoiGian other) const;

    friend istream & operator>>(istream & is, ThoiGian & tg);
    friend ostream & operator<<(ostream & os, ThoiGian & tg);
};

