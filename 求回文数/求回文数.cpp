#include<iostream>
using namespace std;

int main() {
	int num;
	int temp;
	do {
		int sum = 0;
		cout << "������һ�������ж��Ƿ��������";
		cin >> num;
		temp = num;
		while (temp) {
			sum = sum * 10 + temp % 10;
			temp /= 10;
		}
		if (sum == num) {
			cout << num << "��һ��������" << endl;
			cout << "��ϲ������Ŷ��������������" << endl << endl;
		}
		else if (num == 0) {
			cout << "�����˳���Ϸ" << endl;
			system("pause");
		}
		else
			cout << num << "�ⲻ�ǻ�����Ŷ" << endl << endl;
	} while (num != 0);

	return 0;
}