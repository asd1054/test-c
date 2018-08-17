#include<iostream>
using namespace std;

//保护合法输入		
//用法：放在两输入之间
//功能：用于过滤上一次不合法输入的直接赋值于第二次输入
void protect() {
	char ch;
	while (ch = getchar() != '\n')
	{
		continue;
		//cout << "1111111111111" << endl;
	}
}

int main() {
	char ch;
	while ((ch = getchar()) != '\n')
		cout << "执行了！！！" << endl;
	system("pause");
	protect();
	system("pause");
	return 0;
}