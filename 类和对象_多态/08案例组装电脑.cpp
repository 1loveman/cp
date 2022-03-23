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
		cout << "CPU商家为Intel" << endl;
	}
};

class lenovnCPU :public BCPU {
public:
	void Merchant() {
		cout << "CPU商家为lenovn" << endl;
	}
};

class intelMemoryModule :public BMemoryModule {
public:
	void Merchant() {
		cout << "MemoryModule商家为intel" << endl;
	}
};

class lenovnMemoryModule :public BMemoryModule {
public:
	void Merchant() {
		cout << "MemoryModule商家为lenovn" << endl;
	}
};

class intelVideoCard :public BVideoCard {
public:
	void Merchant() {
		cout << "VideoCard商家为Intel" << endl;
	}
};

class lenovnVideoCard :public BVideoCard {
public:
	void Merchant() {
		cout << "VideoCard商家为lenovn" << endl;
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

	cout << "第一台电脑开始工作" << endl;
	//第一台电脑零件
	BCPU* IntelCPU = new intelCPU;
	BVideoCard* IntelVideoCard = new intelVideoCard;
	BMemoryModule* IntelMemoryModule = new intelMemoryModule;
	//实例电脑对象
	Computer* comptuer = new Computer(IntelCPU, IntelVideoCard, IntelMemoryModule);
	comptuer->start();
	delete comptuer;

	cout << "第二台电脑开始工作" << endl;
	//第二台电脑零件
	BCPU* LenovnCPU = new lenovnCPU;
	BVideoCard* LenovnVideoCard = new lenovnVideoCard;
	BMemoryModule* LenovnMemoryModule = new lenovnMemoryModule;
	//实例电脑对象
	Computer* comptuer2 = new Computer(LenovnCPU, LenovnVideoCard, LenovnMemoryModule);
	comptuer2->start();
	delete comptuer2;

	cout << "第三台电脑开始工作" << endl;
	//第三台电脑零件
	BCPU* LenovnCPUz = new lenovnCPU;
	BVideoCard* IntelVideoCardz = new intelVideoCard;
	BMemoryModule* LenovnMemoryModulez = new lenovnMemoryModule;
	//实例电脑对象
	Computer* comptuer3 = new Computer(LenovnCPU, IntelVideoCardz, LenovnMemoryModule);
	comptuer3->start();
	delete comptuer3;
}



int main() {
	test1();


	system("pause");
	return 0;
}