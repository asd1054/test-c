/*
		2018年08月14日星期二
		目的：
			判断scanf、printf函数的用法
		功能：
			保护合法输入

			//scanf函数也有返回值
			//正确输入几个，就返回几
*/
#include<stdio.h>
#include<Windows.h>	

/* scanf输入 按下列分析：
%d ：整数
%f ：浮点值
%9s ：最多有 9 个非空白符的字符串
%2d ： 2 位的整数（数位 5 和 6 ）
%f ：浮点值（数位 7 、 8 、 9）
%*d ：不存储于任何位置的整数
' ' ：所有连续空白符
%3[0-9] ：至多有 3 个十进制数字的字符串（数位 5 和 6 ）
%2lc ：二个宽字符，使用多字节到宽转换
*/

//scanf函数也有返回值	
//正确输入几个，就返回几
void test_return() {	
	int x;
	int a, b, c;
	x = scanf(" %d %d %d", &a, &b, &c);	
	printf("x=%d,a=%d,b=%#X,c=%d\n", x, a, b, c);
}

//保护合法输入		
//用法：放在两输入之间
//功能：用于过滤上一次不合法输入的直接赋值于第二次输入
void protect() {	
	char ch;
	while (ch = getchar() != '\n')
		continue;
}

void test() {
	int i;


	scanf("%d", &i);
	printf("i=%d\n", i);

	//protect();

	int j;
	scanf("%d", &j);
	printf("j=%d\n", j);

}


int main() {

	test();
	/* prinf函数输出 
	%#X		输出：0X十六进制值
	%x中x大写则输出也是大写
	*/


	system("pause");
	return 0;
}