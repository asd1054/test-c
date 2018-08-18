#include<iostream>
using namespace std;

int main() {
	int num;
	int temp;
	do {
		int sum = 0;
		cout << "请输入一串数字判断是否回文数：";
		cin >> num;
		temp = num;
		while (temp) {
			sum = sum * 10 + temp % 10;
			temp /= 10;
		}
		if (sum == num) {
			cout << num << "是一串回文数" << endl;
			cout << "恭喜你答对了哦！！！！！！！" << endl << endl;
		}
		else if (num == 0) {
			cout << "正在退出游戏" << endl;
			system("pause");
		}
		else
			cout << num << "这不是回文数哦" << endl << endl;
	} while (num != 0);

	return 0;
}