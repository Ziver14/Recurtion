#include<iostream>


unsigned long long factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;
}

int fibonacci(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}


int main() {
	setlocale(LC_ALL, "ru");
	int n;
	// Рекурсия - это прием программирования при котором функция вызываесаму себя непосредственно, либо коственно.

	//Факториал с помощью рекурсии.
	std::cout << " Введите число -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << '\n';

	//Числа Фибоначчи.
	std::cout << "Введите номер числа Фибоначчи -> ";
	std::cin >> n;

	std::cout << " Число Фибоначчи №" << n <<
		" = " << fibonacci(n)<<std::endl;


	return 0;
}

