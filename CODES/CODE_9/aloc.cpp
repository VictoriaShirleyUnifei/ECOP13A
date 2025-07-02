#include <iostream>     
#include <new>          

using namespace std;

int main () {

  try
  {
  	// tentativa de alocação sem noção, gera exceção bad_alloc
    int *myarray= new int[10000000000];
  }
  catch (bad_alloc &ba)
  {
    cerr << "bad_alloc capturada: " << ba.what() << '\n';
  }

}

