 // overflow_error exception, reserved storage is not enough
#include <bitset>
#include <iostream>
#include <stdexcept>

using namespace std; 

int main() {
	try	
	{
		// template based
		bitset<100> bitset;
		bitset[99] = 1;
		bitset[0] = 1;

		// to_ulong() é a única função de C++ que dispara a exceção overflow_error
		unsigned long Test = bitset.to_ulong();
	} 
	catch(overflow_error &err)	
	{
		cerr<<"overflow_error capturado: "<<err.what()<<endl;
	}
}

 
