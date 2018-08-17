/*
		2018 08 16 星期四
		目的：
			控制i的间距 也能间接使用判断语句
		功能：
			求奇数之和
*/
#include<iostream>
using namespace std;

//三 位 一换行
void newLine();

//第一次尝试	寻常思维
void test1();

// 第二次尝试
void test2();
int main() {
	cout << "输出100以内的奇数之和" << endl;
	test1();
	system("pause");
	test2();
	system("pause");
	return 0;
}

void test1() {
	int sum=0;
	for (int i = 1; i < 101; i++) {

		if (i % 2 == 1)
		{
			cout << i << " ";
			newLine();
			sum += i;
		}
	}
	cout << endl << "sum=" << sum << endl;
	
}

void newLine() {
	static int j = 0;
	j++;
	if (j % 3 == 0) //控制格式
	{
		cout << endl;
		j = 0;
	}
}

void test2() {
	int i;
	int sum = 0;
	for (i = 1; i <= 100; i += 2)
	{
		cout << i << " ";
		newLine();//有些小问题	不适用这里
		sum += i;
	}
	cout << endl << "sum=" << sum << endl;

}