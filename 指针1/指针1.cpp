/*
		2018 08 18 ������
		Ŀ�ģ�
			int *p
				p������ܵĵ�ַ
				*p��ʾָ����ָ���ֵ
					����int *p=&i;	��*p�ı���i��ֵҲ��ı�

*/
#include<iostream>
using namespace std;

int main(void) {
	int *p;//p�Ǹ��������֣�int * ��ʾ��p����ֻ�ܴ洢int ���ͱ����ĵ�ַ
	int i = 10;
	int j;
	p = &i;
	return 0;
}