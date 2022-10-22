
#include <iostream>
#include "Calculator.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	std::cout << "ВВедите первое число   ";
	std::cin >> x;
	std::cout << std::endl << "Введите второе число  ";
	std::cin >> y;
	std::cout << std::endl << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень)  ";
	int action;
	std::cin >> action;
	switch (action) {
	case 1:
		std::cout << std::endl << x << " плюс " << y << " = " << sum(x, y);
		break;
	case 2:
		std::cout << std::endl << x << " минус " << y << " = " << dif(x, y);
		break;
	case 3:
		std::cout << std::endl << x << " умножить " << y << " = " << multiply(x, y);
		break;
	case 4:
		std::cout << std::endl << x << " разделить " << y << " = " << division(x, y);
		break;
	case 5:
		std::cout << std::endl << x << " в степени " << y << " = " << power(x, y);
		break;
	default:
			std::cout << "Нет такого действия";
		
	}
}
