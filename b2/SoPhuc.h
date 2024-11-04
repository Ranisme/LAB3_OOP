#pragma once
#include <iostream>

using namespace std;

class SoPhuc {
private:
    double dThuc, dAo;
public:
    SoPhuc();
    SoPhuc(double thuc, double ao);

    SoPhuc operator + (SoPhuc other) const;
    SoPhuc operator - (SoPhuc other) const;
    SoPhuc operator * (SoPhuc other) const;
    SoPhuc operator / (SoPhuc other) const;
    bool operator == (SoPhuc other) const;
    bool operator != (SoPhuc other) const;

    friend istream& operator >> (istream& is, SoPhuc& sp);
    friend ostream& operator << (ostream& os, SoPhuc& sp);
};

