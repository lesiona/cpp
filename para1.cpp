#include <iostream>

int main(int argc, const char* argv)
{
	// переменным лучше присваивать значения 
	int variable_name;
	variable_name = -1;
	
	// const - значение переменной не может быть изменено
	const int const_variable = -2;
	
	// переменная доступна только в этих фигурных скобках
	{
		int variable_name_0 = 5;
	}
	
	int32_t variable_32_bit = 32;
	int16_t unsigned_variable = -7; //выводит чушню, т.к. мы вносим -1 в беззнаковый тип
	
	char c = 'a';
	
	//Переменная ординарной точности,обозначается <целая часть>.<дробная часть>f
	float float_number = 0.f;
	//Переменная двойной точности,обозначается <целая часть>.<дробная часть>f
	double double_number = 0.0;
	long double long_double = 0.l;
	
	int a = 1;
	// a/2 вернёт тип переменной int - результат деления, круглённый в меньщую сторону
	std::cout << a / 2 << std::endl;
	
	float b = 1.2;
	float sum_a_b = a+b; //плозая сумма, т.к. а неявно приводится к значению float, а это может приветси к ошибке компилляции
	//Лучше самостоятельно привести а к типу float
	float floating_a = (float)a; //C-style
	float static_floating_a = static_cast<float>(a); // C++ style
	std::cout << sum_a_b << std::endl;
	
	//Выведем первый переданный параметр и число параметров
	std::cout << "Число параметров:" << arg << std::endl;
	std::cout << "Первый параметр" << argc <<std::endl;

	// out our speech
	std::cout <<"Hello world!" << std::endl;
	std::cout << unsigned_variable << std::endl;
	return 0;
}