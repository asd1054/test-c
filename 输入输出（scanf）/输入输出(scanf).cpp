/*
		2018��08��14�����ڶ�
		Ŀ�ģ�
			�ж�scanf��printf�������÷�
		���ܣ�
			�����Ϸ�����

			//scanf����Ҳ�з���ֵ
			//��ȷ���뼸�����ͷ��ؼ�
*/
#include<stdio.h>
#include<Windows.h>	

/* scanf���� �����з�����
%d ������
%f ������ֵ
%9s ������� 9 ���ǿհ׷����ַ���
%2d �� 2 λ����������λ 5 �� 6 ��
%f ������ֵ����λ 7 �� 8 �� 9��
%*d �����洢���κ�λ�õ�����
' ' �����������հ׷�
%3[0-9] �������� 3 ��ʮ�������ֵ��ַ�������λ 5 �� 6 ��
%2lc ���������ַ���ʹ�ö��ֽڵ���ת��
*/

//scanf����Ҳ�з���ֵ	
//��ȷ���뼸�����ͷ��ؼ�
void test_return() {	
	int x;
	int a, b, c;
	x = scanf(" %d %d %d", &a, &b, &c);	
	printf("x=%d,a=%d,b=%#X,c=%d\n", x, a, b, c);
}

//�����Ϸ�����		
//�÷�������������֮��
//���ܣ����ڹ�����һ�β��Ϸ������ֱ�Ӹ�ֵ�ڵڶ�������
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
	/* prinf������� 
	%#X		�����0Xʮ������ֵ
	%x��x��д�����Ҳ�Ǵ�д
	*/


	system("pause");
	return 0;
}