#include "ThoiGian.h"
#include <bits/stdc++.h>

using namespace std;

ThoiGian::ThoiGian() {
    iGio = 0; iPhut = 0; iGiay = 0;
}

ThoiGian :: ThoiGian(int Gio, int Phut, int Giay) {
    iGio = Gio; iPhut = Phut; iGiay = Giay;
}

int ThoiGian :: TinhGiay() const {
    return iGio * 3600 + iPhut * 60 + iGiay;
}

void ThoiGian :: TinhLaiGio(int Giay) {
    iGio = Giay / 3600;
    iPhut = (Giay % 3600) / 60;
    iGiay = Giay % 60;
}

// Thoi gian + giay
ThoiGian ThoiGian :: operator + (int Giay) const {
    int Cur = TinhGiay() + Giay;
    ThoiGian ans;
    ans.TinhLaiGio(Cur);
    return ans;
}

// Thoi gian - day
ThoiGian ThoiGian :: operator - (int Giay) const {
    int Cur = TinhGiay() - Giay;
    ThoiGian ans;
    ans.TinhLaiGio(Cur);
    return ans;
}

// Thoi gian + Thoi gian
ThoiGian ThoiGian :: operator + (ThoiGian other) const {
    int Cur = TinhGiay() + other.TinhGiay();
    ThoiGian ans;
    ans.TinhLaiGio(Cur);
    return ans;
}

// Thoi gian - Thoi gian
ThoiGian ThoiGian :: operator - (ThoiGian other) const {
    int Cur = TinhGiay() - other.TinhGiay();
    ThoiGian ans;
    ans.TinhLaiGio(Cur);
    return ans;
}

// toan tu ++
ThoiGian& ThoiGian :: operator ++ () {
    *this = *this + 1;
    return *this;
}

ThoiGian ThoiGian :: operator ++ (int) {
    ThoiGian tmp = *this;
    ++(*this);
    return tmp;
}

// toan tu --
ThoiGian& ThoiGian :: operator -- () {
    *this = *this - 1;
    return *this;
}

ThoiGian ThoiGian::operator -- (int) {
    ThoiGian temp = *this;
    --(*this);
    return temp;
}

bool ThoiGian :: operator == (ThoiGian other) const {
    return TinhGiay() == other.TinhGiay();
}

bool ThoiGian :: operator != (ThoiGian other) const {
    return TinhGiay() != other.TinhGiay();
}

bool ThoiGian :: operator >= (ThoiGian other) const {
    return TinhGiay() >= other.TinhGiay();
}

bool ThoiGian :: operator <= (ThoiGian other) const {
    return TinhGiay() <= other.TinhGiay();
}

bool ThoiGian :: operator > (ThoiGian other) const {
    return TinhGiay() > other.TinhGiay();
}

bool ThoiGian :: operator < (ThoiGian other) const {
    return TinhGiay() < other.TinhGiay();
}

istream & operator >> (istream & is, ThoiGian & tg) {
    cout << "Nhap gio: "; is >> tg.iGio;
    cout << "Nhap phut: "; is >> tg.iPhut;
    cout << "Nhap giay: "; is >> tg.iGiay;
    return is;
}

ostream & operator << (ostream & os, ThoiGian & tg) {
    os << tg.iGio << "h:" << tg.iPhut << "m:" << tg.iGiay << "s";
    return os;
}

