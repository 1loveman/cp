#include"func.h"
#include"Employee.h"
#include"Boss.h"
#include"Manager.h"



int main() {
	while (1) {
		short FLAG;
		func f;
		f.Menu();
		cout << "请选择:>";
		cin >> FLAG;
		switch (FLAG) {
		case 0://退出系统
			f.Exit();
			break;
		case 1://添加
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