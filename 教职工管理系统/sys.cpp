#include"func.h"
#include"Employee.h"
#include"Boss.h"
#include"Manager.h"



int main() {
	Manager a(01, "ÕÅÈý", 01);
	a.Showinfo();

	while (1) {
		short FLAG;
		func f;
		f.Menu();
		cout << "ÇëÑ¡Ôñ:>";
		cin >> FLAG;
		switch (FLAG) {
		case 0: f.Exit();
			break;
		case 1:
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
		system("cls");
	}


	system("pause");
	return 0;
}