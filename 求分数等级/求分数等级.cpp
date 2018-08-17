#include <iostream>
using namespace std;

void protect() {
	char ch;
	while (ch = getchar() != '\n')
		continue;
}

//用if。。。else 完成查询
void ifElseLevel() {
	int a;
	while (1) {
		cout << "请输入你分数查询你的等级" << endl;
		
		cin >> a;
		if (a == 0)
			break;//后门	跳出程序
		
		//核心代码
		if (a > 100)
			cout << "你怕是在做梦！！！" << endl;
		else if (a >= 90)
			cout << "你的等级查询为：A" << endl;
		else if (a >= 80)
			cout << "你的等级查询为：B" << endl;
		else if (a >= 60) {
			cout << "你的等级查询为：C\n很危险哦！！兄嘚" <<endl;
		}
		else if (a > 0)
			cout << "你的等级查询为：D" << endl;
		else
			cout << "非法输入！！！" << endl;
		protect();
	}
}

//用switch		有BUHG
void switchLevel() {
	int a;
	do {
		cout << "请输入你分数查询你的等级" << endl;
		cin >> a;
		switch (a) {
			case 90:
				cout << "你的等级查询为：A" << endl;
				break;
			case 80:
				cout << "你的等级查询为：B" << endl;
				break;
			case 70:
			case 60:
				cout << "你的等级查询为：C" << endl;
				break;
			default:
				cout << "你的等级查询为：D" << endl;

		}
	} while (a == 0);

}
int main() {
	switchLevel();
	//ifElseLevel();
	system("pause");
	return 0;
}