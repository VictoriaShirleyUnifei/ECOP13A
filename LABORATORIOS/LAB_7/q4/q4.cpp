#include "q4.h"
#include <iomanip>
using namespace std;

ostream& operator<<(ostream& output, const PhoneNumber& number) {
    output << "(" << number.ddd << ") " << number.prefixo << "-" << number.sufixo;
    return output;
}

istream& operator>>(istream& input, PhoneNumber& number) {
    input.ignore(); // skip '('
    input >> setw(2) >> number.ddd;
    input.ignore(2); // skip ") "
    input >> setw(5) >> number.prefixo;
    input.ignore(); // skip '-'
    input >> setw(4) >> number.sufixo;
    return input;
}
