/*
			2018年08月13日--星期一
			目的：
				测试char、string 类型
			功能：
				实现 用户登陆
*/
#include <iostream>
#include <string>
using namespace std;
#define NULL "0"

void check_char() {			
	//char类型		VS2017已经不支持指针直接指向常量了
	//已经放弃使用	vs2017键盘输入，后面的不补'\0'，以至于报错（两数组不相等）			
	//唯一的解决方案就是 将两数组长度设置一样（这就有了非常大的限制，不适合商用）
	//数组长度不一样都不行，差N个'\0'也不行
	//最终解决方案啊！！！！
	//不能用比较符号比较char类型数据啊！！！因为这个比较的是地址而不是其数组中的值
	//
	//内容相同的两个东西
	//	注：字符串比较用用strcmp()函数，strcmp(test, "char")及strcmp(temp, "char")!			切记不要使用比较符号
	//strcmp函数	0：相等	1：大于 -1：小于		
	//				非0==1	非1==0	非-1==1

	cout << "欢迎来到char类型的登陆使用"<<endl;
	char root[] = "wukong";
	char user[20]="0";
	while (1) {
		cout << "请输入用户名：";
		cin >> user;
		int x = strcmp(user, root);
		if (x!=0)
			cout << "用户名输入错误，请重试！" << endl;
		else
			break;
	}
	char pass[] = "123456";
	char psd[20] = "0";
	while (1) {
		cout << "请输入密码：";
		cin >> psd;
		if (strcmp(pass, psd)!=0)
			cout << "密码输入错误，请重试！" << endl;
		else
			break;
	}
}

void check_string() {		
	//string类型
	cout << "欢迎来到string类型的登陆使用"<<endl;
	while (1) {
		string root = "wukong";
		string user = NULL;
		cout << "请输入用户名：";
		cin >> user;
		if (user != root)
			cout << "用户名输入错误，请重试！" << endl;
		else {
			string pass = "123456";
			string psd = NULL;
			do {
				cout << "请输入密码：";
				cin >> psd;
				if (psd != pass)
					cout << "密码输入错误，请重试！" << endl;
			} while (pass != psd);
			break;
		}
	}

}
int main() {
	////测试char	解决键盘输入，两数组相等的问题
	//char ch[] = "wukong";
	//char ch1[20];
	////char *ch1;		不能用一个指针来键盘输入
	//scanf("%s", &ch1);
	////cin >>ch1;
	//if (ch1 == ch)
	//	cout << "1"<<endl ;
	//else
	//	cout << "0"<<endl 
	//测试失败	无法解决问题
	
	//第二次测试
	//char ch[] = "wukong";
	//char c[20];
	//cin >> c;
	//int x = strcmp(c, ch);
	//x = strcmp(c, "wuk");
	//x = strcmp(c, "wukonggg");
	//if (-1)
	//	cout << "dsfhsdfkdsj";
	//if (!1)
	//	cout << "222222222222";
	//if (!-1)
	//	cout << "3333333333333";
	//条件语句 非0即真（包括负数）	非0==1	非1==0	非-1==1
	//strcmp函数	0：相等	1：大于 -1：小于

	check_char();
	cout << "====================================================================="<<endl;
	check_string();
	system("pause");
}

/*
	在VS2017中的输出结果：
	欢 迎 来 到 char类 型 的 登 陆 使 用
	请 输 入 用 户 名 ： wukong
	请 输 入 密 码 ： 123456
	=====================================================================
	欢 迎 来 到 string类 型 的 登 陆 使 用
	请 输 入 用 户 名 ： wukong
	请 输 入 密 码 ： 123456
	请按任意键继续. . .
*/