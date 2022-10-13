#include <iostream> //ввод вывод

//greatest common divisor - наибольший общий делитель
int gcd(int a, int b)
{
	int min = a;
	int div = 1;
	
	if (b < min)
	{
		min = b;
	}
	
	for (int i = 2; i <= min; i++) /*инкримент числа - увеличение на единицу */ 
	{
		if (a % i == 0 && b % i == 0) //% - остаток от деления
		{
			div = i;
		}
	}
	
	return div;
}

//алгоритм евклида
int ae(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else 
		{
			b = b - a;
		}
	}
	return a;
}

//наименьшее общее кратное - наименьшее, на которое оба делятся без остатка
int lcm(int a, int b)
{
	int max = a;
	int div = 1;
	
	if (b > max)
	{
		max = b;
	}
	
	for (int i = 2;; i++)
	{		
		if (i % a == 0 && i % b == 0) //% - остаток от деления
		{
			div = i;
			break;
		}
	}
	/*while (true)
	{
		
	}*/
	return div;
}

/*массивы
int arr[] = {1, 2, 3}; - все индексы с нуля, т.е. вывод arr[2] -> 3
int arr_not_filled[3] = {}; - все в нулях
размер массива не может быть переменной, это const, известная до начала компиляции программы
*/

const int a[] = {
	4,
	3,
	2,
	1,
	1
};

float average_a()
{
	//sizeof - возвращает размер переменной в байтах
	//получим при делении количество элементов
	const int el_count = sizeof(a) / sizeof(int);
	
	float avg = 0.f;
	
	for (int i = 0; i < el_count; i++)
	{
		avg += static_cast<float>(a[i]) /  static_cast<float>(el_count); //переводим а во float
	}
	return avg;
}

int factorials[10];

void fill_factorials()
{
	const int el_count = sizeof(factorials) / sizeof(int);
	factorials[0] = 1;
	
	for (int i = 1; i < el_count; i++)
	{
		factorials[i] = factorials[i-1] * i;
		
	}
}

int factorial(int n)
{
	return factorials[n];
}

int bin(int n, int k)
{
	return factorial(n) / factorial(n-k) / factorial(k);
	
}

int bin_sum(int n)
{
	int sum = 0;
	
	for (int i = 0; i <= n; i++)
	{
		sum += bin(n, i);
		
	}
	return sum;
}

int main()
{
	int a;
	int m = 30;
	int n = 15;
	std::cout << "GCD(" << m << "," << n << ") = " << gcd(m, n) << std::endl;
	std::cout << "AE(" << m << "," << n << ") = " << ae(m, n) << std::endl;
	std::cout << "LCM(" << m << "," << n << ") = " << lcm(m, n) << std::endl;
	std::cout << "AVG = " << average_a() << std::endl;
	
	fill_factorials(); //заполнили массив
	
	std::cout << "SUM BIN(9, k) = " << bin_sum(9) << std::endl;
	
	std::cin >> a; //чтобы программы сразу не закрывалась
	return 0;
}