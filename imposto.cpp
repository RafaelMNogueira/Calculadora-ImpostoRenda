#include <stdio.h>
#include <stdlib.h>

int main()

{	//criação da struct
	struct func
	{
		char nome[40] = { 0 };
		float salario = 0;
	}; 
	struct func dados;
	float ir;
	//Recolhe os Dados do Funcionario

	printf_s("Nome do funcionario: ");
	gets_s(dados.nome);
	printf_s("\nSalario do funcionario: ");
	scanf_s("%f", &dados.salario);


	//calculo IR
	if (dados.salario <= 1637.11) { // Verifica a Primeira Condição do Salário
		printf_s("Funcionario: %s", dados.nome);
		printf_s("\nIsento IR!\n");
		system("pause");
		return 0;

	} else if (dados.salario > 1637.11 && dados.salario <= 2453.50) {  // Verifica a Segunda Condição do Salário
		ir = dados.salario * 7.5 / 100;
		printf_s("Aliquota de calculo: 7.5%%");

	} else if (dados.salario > 2453.51 && dados.salario <= 3271.38) {  // Verifica a Terceira Condição do Salário
		ir = dados.salario * 15 / 100;
		printf_s("Aliquota de calculo: 15%%");

	} else if (dados.salario > 3271.39 && dados.salario <= 4087.65) {  // Verifica a Quarta Condição do Salário
		ir = dados.salario * 22.5 / 100;
		printf_s("Aliquota de calculo: 22,5%%");

	} else if (dados.salario > 4087.66) {  // Verifica a Quinta Condição do Salário
		ir = dados.salario * 27.5 / 100;
		printf_s("Aliquota de calculo: 27,5%%");

	}

	printf_s("\nO valor do Imposto de Renda eh: %f\n", ir);  //Mostra o Valor do Imposto de Renda
	system("pause"); //Encerra o Programa
	return 0;

}
