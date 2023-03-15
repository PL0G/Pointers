#include <iostream>
#include <cstdlib>
#include <ctime>



template <typename T>
void my_swap(T num1,T num2) {
	T tmp= num1;
	num1 = num2;
	num2 = tmp;
	

}
template<typename T>
void p_swap(T* pnum1, T* pnum2) {
	T tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;


	//Указатели на переменные
	
	n = 10; m = 20;
	std::cout << "n = " << n << "\n";
	std::cout << "&n = " << &n << "\n";//Получение адреса объекта
	int* pn=&n;//создание указателя направленного на переменную n
	std::cout << "pn = " << pn<<"\n";// вывод адреса хранящегося в указателе
	std::cout << "*pn = " << *pn << "\n";// вывод n через разыменование pn
	*pn = 15;
	std::cout << "Новая n = "<<n<<"\n";

	pn = &m; //перенаправление указателя на адрес переменной m
	std::cout << "m = " << m << "\n";
	std::cout << "&m = " << &m << "\n";
	std::cout << "pn = " << pn << "\n";
	std::cout << "*pn = " << *pn << "\n";
	int* pm = &m;
	std::cout << "pm = " << pn << "\n";
	
	//Указатели и массивы 
	
	const int size = 5;
	int arr[size]{ 10,9,50,30,14 };
	int* pa2 = &arr[2];
	std::cout << "*pa2 = " << *pa2 << "\n";
	pa2++;
	std::cout << "*pa2 = " << *pa2 << "\n";
	pa2 -= 2;
	std::cout << "*pa2 = " << *pa2 << "\n";
	pa2 = &arr[0];
	std::cout << "Массив:\n";
	for (int i = 0; i < size; i++) 
		std::cout << *(pa2+i)<<" ";
	std::cout << std::endl;
	
	std::cout << "arr = " << arr << "\n";
	std::cout << "arr = " << arr+1 << "\n";
	
	//Области применения указателей:
	//1. Работа с массивами
	//2. Выделение динамической памяти
	//3. Доступ к элементам из разных блоков программы(из разных функций)
	//4. Экономия памяти.
	//Размер указателя не зависит от типа данных, установленного при его объявлении.
	//Он зависит от разрядности ОС устройства. У 32-битных ОС размер -4 байта, а 64-битных - 8 байт.

	//Указатели и функции
	n = 7; m = 15;
	std::cout << n << " " << m << std::endl;
	//my_swap(n, m);//Не работает так как параметры - копии
	p_swap(&n, &m);
	std::cout << n << " " << m << std::endl;
	return 0;
}