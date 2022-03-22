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
	void start() {
		bcpu->Merchant();
		bvideocard->Merchant();
		bmemorymodule->Merchant();
	}
	BCPU* bcpu;
	BVideoCard* bvideocard;
	BMemoryModule* bmemorymodule;
};



int main() {
	Computer p1(new intelCPU, new intelVideoCard, new intelMemoryModule);
	p1.start();

	system("pause");
	return 0;
}