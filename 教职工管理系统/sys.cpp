#include"func.h"
#include"Employee.h"
#include"Boss.h"
#include"Manager.h"



int main() {
	Worker* worker=new Manager(01, "����", 01);
	worker->Showinfo();

	while (1) {
		short FLAG;
		func f;
		f.Menu();
		cout << "��ѡ��:>";
		cin >> FLAG;
		switch (FLAG) {
		case 0://�˳�ϵͳ
			f.Exit();
			break;
		case 1://���
			f.Add();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:system("cls");
			break;
		}
	}


	system("pause");
	return 0;
}