#include<iostream>
using namespace std;
class Htmlpage {
public:
	int m_1;
protected:
	int m_2;
private:
	int m_3;
};

class C : public Htmlpage//子类引用父类格式。
{
public:
	int m_1;
};


void test() {
	C c;
	cout << "size of c=" << sizeof(C)<<endl;

	
}

int main() {
	//子类从父类继承，是将父类的全部属性都继承过来，但是编译器自动将私有隐藏了。
	//利用开发人员命令工具查看
	//到达对应的路径 输入cl /d1 reportSingleClassLayoutl类名 文件名tab补全。
	
	test();

	return 0;
}