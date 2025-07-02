#include <stdexcept>
using namespace std;

// detecta tentativas de divisão por zero durante a execução
class DivideByZeroException : public runtime_error 
{
	public:
		// construtor especifica mensagem de erro padrão
		DivideByZeroException() 
			: runtime_error("Tentativa de divisao por zero.") {}
};

