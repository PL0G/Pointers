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


	//��������� �� ����������
	
	n = 10; m = 20;
	std::cout << "n = " << n << "\n";
	std::cout << "&n = " << &n << "\n";//��������� ������ �������
	int* pn=&n;//�������� ��������� ������������� �� ���������� n
	std::cout << "pn = " << pn<<"\n";// ����� ������ ����������� � ���������
	std::cout << "*pn = " << *pn << "\n";// ����� n ����� ������������� pn
	*pn = 15;
	std::cout << "����� n = "<<n<<"\n";

	pn = &m; //��������������� ��������� �� ����� ���������� m
	std::cout << "m = " << m << "\n";
	std::cout << "&m = " << &m << "\n";
	std::cout << "pn = " << pn << "\n";
	std::cout << "*pn = " << *pn << "\n";
	int* pm = &m;
	std::cout << "pm = " << pn << "\n";
	
	//��������� � ������� 
	
	const int size = 5;
	int arr[size]{ 10,9,50,30,14 };
	int* pa2 = &arr[2];
	std::cout << "*pa2 = " << *pa2 << "\n";
	pa2++;
	std::cout << "*pa2 = " << *pa2 << "\n";
	pa2 -= 2;
	std::cout << "*pa2 = " << *pa2 << "\n";
	pa2 = &arr[0];
	std::cout << "������:\n";
	for (int i = 0; i < size; i++) 
		std::cout << *(pa2+i)<<" ";
	std::cout << std::endl;
	
	std::cout << "arr = " << arr << "\n";
	std::cout << "arr = " << arr+1 << "\n";
	
	//������� ���������� ����������:
	//1. ������ � ���������
	//2. ��������� ������������ ������
	//3. ������ � ��������� �� ������ ������ ���������(�� ������ �������)
	//4. �������� ������.
	//������ ��������� �� ������� �� ���� ������, �������������� ��� ��� ����������.
	//�� ������� �� ����������� �� ����������. � 32-������ �� ������ -4 �����, � 64-������ - 8 ����.

	//��������� � �������
	n = 7; m = 15;
	std::cout << n << " " << m << std::endl;
	//my_swap(n, m);//�� �������� ��� ��� ��������� - �����
	p_swap(&n, &m);
	std::cout << n << " " << m << std::endl;
	return 0;
}