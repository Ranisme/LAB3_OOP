#pragma once
#include <bits/stdc++.h>

using namespace std;

class PhanSo {
private:
    int iTu, iMau;
public:
    PhanSo();
    PhanSo(int Tu, int Mau);

    PhanSo operator + (PhanSo other) const;
    PhanSo operator - (PhanSo other) const;
    PhanSo operator * (PhanSo other) const;
    PhanSo operator / (PhanSo other) const;
    bool operator == (PhanSo other) const;
    bool operator != (PhanSo other) const;
    bool operator >= (PhanSo other) const;
    bool operator <= (PhanSo other) const;
    bool operator > (PhanSo other) const;
    bool operator < (PhanSo other) const;

    friend ostream & operator << (ostream& os, PhanSo& ps);
    friend istream & operator >> (istream& is, PhanSo& ps);
};

