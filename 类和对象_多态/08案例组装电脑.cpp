#include<iostream>
using namespace std;

class BCPU {
public:
	virtual void Merchant() = 0;
};
class BVideoCard {
public:
	virtual void Merchant() = 0;
};
class BMemoryModule {
public:
	virtual void Merchant() = 0;
};

class intelCPU:public BCPU {
public:
	void Merchant() {
		cout << "CPU�̼�ΪIntel" << endl;
	}
};

class lenovnCPU :public BCPU {
public:
	void Merchant() {
		cout << "CPU�̼�Ϊlenovn" << endl;
	}
};

class intelMemoryModule :public BMemoryModule {
public:
	void Merchant() {
		cout << "MemoryModule�̼�Ϊintel" << endl;
	}
};

class lenovnMemoryModule :public BMemoryModule {
public:
	void Merchant() {
		cout << "MemoryModule�̼�Ϊlenovn" << endl;
	}
};

class intelVideoCard :public BVideoCard {
public:
	void Merchant() {
		cout << "VideoCard�̼�ΪIntel" << endl;
	}
};

class lenovnVideoCard :public BVideoCard {
public:
	void Merchant() {
		cout << "VideoCard�̼�Ϊlenovn" << endl;
	}
};

class Computer {
public:
	Computer(BCPU* bcpu,BVideoCard* bvideocard,BMemoryModule* bmemorymodule) {
		this->bcpu = bcpu;
		this->bvideocard = bvideocard;
		this->bmemorymodule = bmemorymodule;
	}
	~Computer() {
		if (bcpu != NULL) {
			delete bcpu;
			bcpu = NULL;
		}
		if (bvideocard != NULL) {
			delete bvideocard;
			bvideocard = NULL;
		}
		if (bmemorymodule != NULL) {
			delete bmemorymodule;
			bmemorymodule = NULL;
		}
		
		
	}
	void start() {
		bcpu->Merchant();
		bvideocard->Merchant();
		bmemorymodule->Merchant();
	}
	BCPU* bcpu;
	BVideoCard* bvideocard;
	BMemoryModule* bmemorymodule;
};

void test1() {

	cout << "��һ̨���Կ�ʼ����" << endl;
	//��һ̨�������
	BCPU* IntelCPU = new intelCPU;
	BVideoCard* IntelVideoCard = new intelVideoCard;
	BMemoryModule* IntelMemoryModule = new intelMemoryModule;
	//ʵ�����Զ���
	Computer* comptuer = new Computer(IntelCPU, IntelVideoCard, IntelMemoryModule);
	comptuer->start();
	delete comptuer;

	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	//�ڶ�̨�������
	BCPU* LenovnCPU = new lenovnCPU;
	BVideoCard* LenovnVideoCard = new lenovnVideoCard;
	BMemoryModule* LenovnMemoryModule = new lenovnMemoryModule;
	//ʵ�����Զ���
	Computer* comptuer2 = new Computer(LenovnCPU, LenovnVideoCard, LenovnMemoryModule);
	comptuer2->start();
	delete comptuer2;

	cout << "����̨���Կ�ʼ����" << endl;
	//����̨�������
	BCPU* LenovnCPUz = new lenovnCPU;
	BVideoCard* IntelVideoCardz = new intelVideoCard;
	BMemoryModule* LenovnMemoryModulez = new lenovnMemoryModule;
	//ʵ�����Զ���
	Computer* comptuer3 = new Computer(LenovnCPU, IntelVideoCardz, LenovnMemoryModule);
	comptuer3->start();
	delete comptuer3;
}



int main() {
	test1();


	system("pause");
	return 0;
}