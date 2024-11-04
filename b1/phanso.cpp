#include "phanso.h"
#include <bits/stdc++.h>

using namespace std;

PhanSo :: PhanSo() {
    iTu = 1;
    iMau = 1;
}

PhanSo :: PhanSo(int Tu, int Mau) {
    iTu = Tu;
    iMau = Mau;
}

PhanSo PhanSo :: operator + (PhanSo other) const {
     return PhanSo(iTu * other.iMau + other.iTu * iMau, iMau * other.iMau);
}

PhanSo PhanSo :: operator - (PhanSo other) const {
    return PhanSo(iTu * other.iMau - other.iTu * iMau, iMau * other.iMau);
}

PhanSo PhanSo :: operator * (PhanSo other) const {
    return PhanSo(iTu * other.iTu, iMau * other.iMau);
}

PhanSo PhanSo :: operator / (PhanSo other) const {
    return PhanSo(iTu * other.iMau, iMau * other.iTu);
}

bool PhanSo :: operator == (PhanSo other) const {
    return iTu * other.iMau == other.iTu * iMau;
}

bool PhanSo :: operator != (PhanSo other) const {
    return !(*this == other);
}

bool PhanSo :: operator >= (PhanSo other) const {
    return iTu * other.iMau >= other.iTu * iMau;
}

bool PhanSo :: operator <= (PhanSo other) const {
    return iTu * other.iMau <= other.iTu * iMau;
}

bool PhanSo :: operator > (PhanSo other) const {
    return iTu * other.iMau > other.iTu * iMau;
}

bool PhanSo :: operator < (PhanSo other) const {
    return iTu * other.iMau < other.iTu * iMau;
}

ostream & operator << (ostream & os, PhanSo & Cur) {
    os << Cur.iTu << "/" << Cur.iMau;
    return os;
}

istream & operator >> (istream & is, PhanSo & Cur) {
    is >> Cur.iTu; is >> Cur.iMau;
    return is;
}

