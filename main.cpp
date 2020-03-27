#include <iostream>
using namespace std;


void calculadora(int USER_INPUT_OP1, int USER_INPUT_OP2, int USER_INPUT_OP3)
{
	int OPERATOR1;
	int OPERATOR2;
	int RES;
	for (OPERATOR1 = USER_INPUT_OP1, OPERATOR2 = USER_INPUT_OP2; OPERATOR2 < (USER_INPUT_OP3 + 1); OPERATOR2++) {
		RES = OPERATOR1 * OPERATOR2;
		cout << "" << OPERATOR1 << " x " << OPERATOR2 << " = " << RES << endl;
	}
}

int input1()
{
	int OPERADOR1;
	cout << "Este programa cria a tabuada de um numero." << endl << "Primeiro, digite de qual numero deseja gerar uma tabudada: ";
	cin >> OPERADOR1;
	return OPERADOR1;
}

int input3()
{
	int OPERADOR3;
	cout << "Agora, ate que numero voce quer multiplicar: ";
	cin >> OPERADOR3;
	return OPERADOR3;
}

int main()
{
	int num1 = input1();
	int num3 = input3();
	calculadora(num1, 1, num3);
	return 0;
}