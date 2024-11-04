#include "Day.h"
#include <bits/stdc++.h>

using namespace std;

int Month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Day :: Day() {
    iNgay = 0; iThang = 0; iNam = 0;
}

Day :: Day(int Ngay, int Thang, int Nam) {
    iNgay = Ngay; iThang = Thang; iNam = Nam;
}

int Day :: TinhNgay() const {
    int Cur = iNam * 365;
    for (int i = 0; i < iThang - 1; i++)
        Cur = Cur + Month[i];
    Cur = Cur + iNgay;
    return Cur;
}

void Day :: TinhLaiNgay(int Ngay) {
    iNam = Ngay / 365;
    int tmp = Ngay % 365;
    int i = 0;
    while (tmp > Month[i]) {
        tmp -= Month[i];
        i++;
    }
    iThang = i + 1;
    iNgay = tmp;
}

// Thoi gian + Ngay
Day Day :: operator + (int Ngay) const {
    int Cur = TinhNgay() + Ngay;
    Day ans;
    ans.TinhLaiNgay(Cur);
    return ans;
}

// Thoi gian - day
Day Day :: operator - (int Ngay) const {
    int Cur = TinhNgay() - Ngay;
    Day ans;
    ans.TinhLaiNgay(Cur);
    return ans;
}

// Thoi gian + Thoi gian
Day Day :: operator + (Day other) const {
    int Cur = TinhNgay() + other.TinhNgay();
    Day ans;
    ans.TinhLaiNgay(Cur);
    return ans;
}

// Thoi gian - Thoi gian
Day Day :: operator - (Day other) const {
    int Cur = TinhNgay() - other.TinhNgay();
    Day ans;
    ans.TinhLaiNgay(Cur);
    return ans;
}

// toan tu ++
Day& Day :: operator ++ () {
    *this = *this + 1;
    return *this;
}

Day Day :: operator ++ (int) {
    Day tmp = *this;
    ++(*this);
    return tmp;
}

// toan tu --
Day& Day :: operator -- () {
    *this = *this - 1;
    return *this;
}

Day Day::operator -- (int) {
    Day temp = *this;
    --(*this);
    return temp;
}

bool Day :: operator == (Day other) const {
    return TinhNgay() == other.TinhNgay();
}

bool Day :: operator != (Day other) const {
    return TinhNgay() != other.TinhNgay();
}

bool Day :: operator >= (Day other) const {
    return TinhNgay() >= other.TinhNgay();
}

bool Day :: operator <= (Day other) const {
    return TinhNgay() <= other.TinhNgay();
}

bool Day :: operator > (Day other) const {
    return TinhNgay() > other.TinhNgay();
}

bool Day :: operator < (Day other) const {
    return TinhNgay() < other.TinhNgay();
}

istream & operator >> (istream & is, Day & tg) {
    cout << "Nhap ngay: "; is >> tg.iNgay;
    cout << "Nhap thang: "; is >> tg.iThang;
    cout << "Nhap nam: "; is >> tg.iNam;
    return is;
}

ostream & operator << (ostream & os, Day & tg) {
    os << tg.iNgay << "/" << tg.iThang << "/" << tg.iNam;
    return os;
}


