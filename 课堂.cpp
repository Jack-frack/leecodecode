//#include<string>
//class Student
//{
//public:
//	Student(std::string name, int id);
//	~Student();
//
//private:
//	std::string name;
//	int id;
//};
//
//Student::Student(std::string name,int id)
//{
//	this->name = name;
//	this->id = id;
//}
//
//Student::~Student()
//{
//
//}
//
//
//
//int main() {
//	Student *s = new Student("xiaoming", 7);
//}
#include<iostream>
using namespace std;

class CAT
{
public:
	CAT();
	//TODO 拷贝构造函数声明
	CAT(CAT &cat);
	~CAT();
	int GetAge() const { return *itsAge; }
	void SetAge(int age) { *itsAge = age; }
protected:
	int* itsAge;
};

CAT::CAT()
{
	itsAge = new int;
	*itsAge = 5;
}

//TODO 拷贝构造函数实现
CAT::CAT(CAT& cat) {
	this->itsAge = new int(cat.GetAge());

}


CAT::~CAT()
{
	delete itsAge;
	itsAge = 0;
}

//int main()
//{
//	CAT frisky;
//	cout << "frisky's age:" << frisky.GetAge() << endl;
//	cout << "Setting frisky to 6...\n";
//	frisky.SetAge(6);
//	cout << "Creating boots from frisky\n";
//	CAT boots(frisky); //拷贝构造函数使用
//	cout << "frisky's age:" << frisky.GetAge() << endl;
//	cout << "boots'age:" << boots.GetAge() << endl;
//
//	cout << "setting frisky to 7...\n";
//	frisky.SetAge(7);
//	cout << "frisky's age:" << frisky.GetAge() << endl;
//	cout << "boots'age:" << boots.GetAge() << endl;
//}//--------------------------
