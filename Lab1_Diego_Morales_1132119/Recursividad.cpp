#include "Recursividad.h"


Recursividad::Recursividad()
{
}
int Recursividad::Fibonacci(int num) {
	if (num <= 1) {
		return 1;
	}
	else {
		return Fibonacci(num - 1) + Fibonacci(num - 2);
	}
}

int Recursividad::Factorial(int num1) {
	if (num1 == 0) {
		return 1;
	}
	else {
		return (num1 * Factorial(num1 - 1));
	}
}

System::String^ Recursividad::Binario(int num2) {
	if (num2 > 0) {
		if (num2 % 2 == 0) {
			return (Binario(num2 / 2) + "0");
		}
		else {
			return (Binario(num2 / 2) + "1");
		}
	}
}

int Recursividad::Multiplicacion(int fact1, int fact2) {
	if (fact1 == 0 || fact2 == 0) {
		return 0;
	}
	else {
		return fact1 + Multiplicacion(fact1, fact2 - 1);
	}
}

System::String^ Recursividad::Palindromo(System::String^ Palabra) {
	int i = 0;
	int j = Palabra->Length - 1;
	int mitad = (j + 1) / 2;
	while (Palabra[i] == Palabra[j] && j >= 0) {
		j--;
		i++;
		if (mitad == i) {
			return "Es palindromo.";
			}
	}
	return "No es palindromo.";
}

int Recursividad::Decimal(int num4, int base) {

}