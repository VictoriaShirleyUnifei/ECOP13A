//Questão 1
#include <iostream>

using namespace std;

int q1()
{    
	int n, i;    
	int fatorial = 1;
   cout << "Insira o valor: " << "\n";    
   cin >> n;
   
   for(i = 1; i <= n; i++)
   {
	   fatorial += i;
   }
   
   cout << "Fatorial: " << fatorial << endl;
   
   return 0;
}