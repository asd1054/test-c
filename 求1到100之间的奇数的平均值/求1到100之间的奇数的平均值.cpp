#include <iostream>
using namespace std;
void newLine();
void test2();
int main() {
	test2();
	system("pause");
	return 0;
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
	int num = 0;
	int sum = 0;
	int average;
	for (i = 1; i <= 100; i += 2)
	{
		cout << i << " ";
		newLine();//有些小问题	不适用这里
		num++;
		sum += i;
	}
	average = sum /num;
	cout << endl << endl<< "sum=" << sum << endl;
	cout << endl << "num=" << num << endl;
	cout << endl << "average=" << average << endl;
}