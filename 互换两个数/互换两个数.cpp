#include<iostream>
using namespace std;

int c=1;//控制使用哪个函数	默认：swap1

//&引用调用
void swap1(int &a,int &b) {
	int c = a;
	a = b;
	b = c;
}

//*指针交换
void swap2(int *a, int *b) {
	int *c = a;
	*a = *b;
	*b = *c;
}

void turn(int a,int b) {
	if (a == 1 && b == 1) {//后门 1 1
		c = 2;
	}
	else if (a == 0 && b == 0) {//后门
		c = 3;
	}
	else  if(a == 2 && b == 2) 
		c = 1;
	
}

void main() {
	int a, b;
	while (1) {
		cout << "请输入两个数" << endl;
		cin >> a >> b;
		cout << "交换前：a=" << a << ",b=" << b << endl;
		turn(a, b);
		if (c == 1) {
			swap1(a, b);
		}
		else if (c == 2) {
			swap2(&a, &b);
		}
		else if(c == 3)
			break;

		cout<< "交换后：a=" << a << ",b=" << b << endl;
	}
}