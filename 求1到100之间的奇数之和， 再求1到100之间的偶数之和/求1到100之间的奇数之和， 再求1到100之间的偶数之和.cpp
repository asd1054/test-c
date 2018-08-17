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
	int num = 0;	//计数器
	int double_sum = 0;	
	int single_sum = 0;
	int average;
	for (i = 1; i <= 100 ; i ++)
	{
		cout << i << " ";
		newLine();//有些小问题	不适用这里
		num++;
		if (num%2==1)
			single_sum += i;
		else
		double_sum += i;
	}
	average = double_sum / num;
	cout << endl << endl << "single_sum=" << single_sum << endl;
	cout << endl << "double_sum=" << double_sum << endl;

}