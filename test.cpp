#include <iostream>
#include <locale.h>


int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	std::cout << "Ol�, mundo!";
	return 0;
}

