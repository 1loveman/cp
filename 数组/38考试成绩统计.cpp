#include<iostream>
using namespace std;

int main() {
	int arr[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	for (int i = 0; i < 3; i++) {
		switch (i) {
		case 0:cout << "�����ܳɼ�Ϊ��";
			break;
		case 1:cout << "�����ܳɼ�Ϊ��";
			break;
		default:cout << "�����ܳɼ�Ϊ��";
			break;
		}
		cout << arr[i][0] + arr[i][1] + arr[i][2]<<endl;
	}
	system("pause");
	return 0;
}