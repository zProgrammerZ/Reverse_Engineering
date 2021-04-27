#include <iostream>
#include <locale.h>


int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	std::cout << "Olá, mundo!";
	return 0;
}

