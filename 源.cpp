#include<iostream>
class MyClass
{
public:
	MyClass();
	~MyClass();

private:
	int s;
};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
	std::cout << "asddasd"<<s;
}

//int	main() {
//	MyClass xx;
//
//}