/*
		2018 08 18 星期六
		目的：
			int *p
				p代表接受的地址
				*p表示指针所指向的值
					例如int *p=&i;	则*p改变则i的值也会改变

*/
#include<iostream>
using namespace std;

int main(void) {
	int *p;//p是个变量名字，int * 表示该p变量只能存储int 类型变量的地址
	int i = 10;
	int j;
	p = &i;
	return 0;
}