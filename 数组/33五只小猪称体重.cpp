#include<iostream>
using namespace std;

int main() {
	//����ֻС�����ҳ��������صĴ�ӡ����
	int arr[5] = { 10,20,30,40,50 };
	int i = 0,tmp=0;
	while (i < 5) {
		if(tmp<arr[i]){
			tmp = arr[i];
		}
		i++;
	}
	cout << tmp << endl;
	system("pause");
	return 0;
}