//#include<iostream>
//
//void MyFunc(void)
//{
//	std::cout << " Myfunc(void) called" << std::endl;
//}
//
//void MyFunc(char c)
//{
//	std::cout << "MyFunc(char c) called" << std::endl;
//}
//
//void MyFunc(int a, int b)
//{
//	std::cout << "MyFunc(int a, int b) called" << std::endl;
//}
//
//int main(void)
//{
//	MyFunc();
//	MyFunc('A');
//	MyFunc(12, 13);
//	return 0;
//}
//#include<iostream>
//
//void swap(int *p1, int *p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//void swap(char* p1, char* p2)
//{
//	char temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//void swap(double * p1, double * p2)
//{
//	double temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//int main()
//{
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);
//	std::cout<<num1<<' '<<num2<<std::endl;
//
//	char ch1 = 'A', ch2 = 'Z';
//	swap(&ch1, &ch2);
//	std::cout << ch1 << ' ' << ch2 << std::endl;
//
//	double dbl1 = 1.111, dbl2 = 5.555;
//	swap(&dbl1, &dbl2);
//	std::cout << dbl1 << ' ' << dbl2 << std::endl;
//	return 0;
//}
//#include<iostream>
//
//int Adder(int num1 = 1, int num2 = 2)
//{
//	return num1 + num2;
//}
//
//int main(void)
//{
//	std::cout << Adder() << std::endl;
//	std::cout << Adder(5) << std::endl;
//	std::cout << Adder(3, 5) << std::endl;
//	return 0;
//}
#include <iostream>
int Adder(int num1 = 1, int num2 = 2);

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;

}

int Adder(int num1, int num2)
{
	return num1 + num2;
}