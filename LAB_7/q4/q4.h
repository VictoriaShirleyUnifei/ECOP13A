#ifndef Q4_H
#define Q4_H

#include <iostream>
#include <string>
using namespace std;

class PhoneNumber {
    friend ostream& operator<<(ostream&, const PhoneNumber&);
    friend istream& operator>>(istream&, PhoneNumber&);

private:
    string ddd;     // 2 dígitos
    string prefixo; // 5 dígitos (ex: 98765)
    string sufixo;  // 4 dígitos
};

#endif 
