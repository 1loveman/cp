#include"func.h"
#include"Employee.h"
#include"Boss.h"
#include"Manager.h"



int main() {
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
		case 2://��ʾ
			f.ShowMassage();
			break;
		case 3://ɾ��
			f.Delete();
			break;
		case 4://�޸�
			f.Revise();
			break;
		case 5://����
			f.find();
			break;
		case 6://����
			f.sort();
			break;
		case 7://���
			f.Clear();
			break;
		default:system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}