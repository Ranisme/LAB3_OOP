#include "SoPhuc.h"
#include <bits/stdc++.h>

using namespace std;

SoPhuc :: SoPhuc() {
    dThuc = 0; dAo = 0;
}

SoPhuc :: SoPhuc(double Thuc, double Ao) {
    dThuc = Thuc; dAo = Ao;
}

SoPhuc SoPhuc :: operator + (SoPhuc other) const {
    return SoPhuc(dThuc + other.dThuc, dAo + other.dAo);
}

SoPhuc SoPhuc :: operator - (SoPhuc other) const {
    return SoPhuc(dThuc - other.dThuc, dAo - other.dAo);
}

// z1 = a + bi
// z2 = c + di
// z1 * z2 = (ac - bd) + (ad + bc)i
SoPhuc SoPhuc :: operator * (SoPhuc other) const {
    double thuc = dThuc * other.dThuc - dAo * other.dAo;
    double ao = dThuc * other.dAo + dAo * other.dThuc;
    return SoPhuc(thuc, ao);
}


//z1 = a + bi
//z2 = c + di
// z1 / z2 = (ac + bc) / (c ^ 2 + d ^ 2) + (bc - ad) / (c ^ 2 + d ^ 2)
SoPhuc SoPhuc :: operator / (SoPhuc other) const {
    double mau = other.dThuc * other.dThuc + other.dAo * other.dAo;
    double thuc = (dThuc * other.dThuc + dAo * other.dAo) / mau;
    double ao = (dAo * other.dThuc - dThuc * other.dAo) / mau;
    return SoPhuc(thuc, ao);
}

bool SoPhuc :: operator == (SoPhuc other) const {
    return dThuc == other.dThuc && dAo == other.dAo;
}

bool SoPhuc :: operator != (SoPhuc other) const {
    return dThuc != other.dThuc || dAo != other.dAo;
}

istream & operator >> (istream & is, SoPhuc& sp) {
    is >> sp.dThuc;
    is >> sp.dAo;
    return is;
}

ostream & operator << (ostream & os, SoPhuc& sp) {
    os << sp.dThuc << " + " << sp.dAo << "i";
    return os;
}
