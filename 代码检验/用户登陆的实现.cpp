/*
			2018��08��13��--����һ
			Ŀ�ģ�
				����char��string ����
			���ܣ�
				ʵ�� �û���½
*/
#include <iostream>
#include <string>
using namespace std;
#define NULL "0"

void check_char() {			
	//char����		VS2017�Ѿ���֧��ָ��ֱ��ָ������
	//�Ѿ�����ʹ��	vs2017�������룬����Ĳ���'\0'�������ڱ��������鲻��ȣ�			
	//Ψһ�Ľ���������� �������鳤������һ����������˷ǳ�������ƣ����ʺ����ã�
	//���鳤�Ȳ�һ�������У���N��'\0'Ҳ����
	//���ս����������������
	//�����ñȽϷ��űȽ�char�������ݰ���������Ϊ����Ƚϵ��ǵ�ַ�������������е�ֵ
	//
	//������ͬ����������
	//	ע���ַ����Ƚ�����strcmp()������strcmp(test, "char")��strcmp(temp, "char")!			�мǲ�Ҫʹ�ñȽϷ���
	//strcmp����	0�����	1������ -1��С��		
	//				��0==1	��1==0	��-1==1

	cout << "��ӭ����char���͵ĵ�½ʹ��"<<endl;
	char root[] = "wukong";
	char user[20]="0";
	while (1) {
		cout << "�������û�����";
		cin >> user;
		int x = strcmp(user, root);
		if (x!=0)
			cout << "�û���������������ԣ�" << endl;
		else
			break;
	}
	char pass[] = "123456";
	char psd[20] = "0";
	while (1) {
		cout << "���������룺";
		cin >> psd;
		if (strcmp(pass, psd)!=0)
			cout << "����������������ԣ�" << endl;
		else
			break;
	}
}

void check_string() {		
	//string����
	cout << "��ӭ����string���͵ĵ�½ʹ��"<<endl;
	while (1) {
		string root = "wukong";
		string user = NULL;
		cout << "�������û�����";
		cin >> user;
		if (user != root)
			cout << "�û���������������ԣ�" << endl;
		else {
			string pass = "123456";
			string psd = NULL;
			do {
				cout << "���������룺";
				cin >> psd;
				if (psd != pass)
					cout << "����������������ԣ�" << endl;
			} while (pass != psd);
			break;
		}
	}

}
int main() {
	////����char	����������룬��������ȵ�����
	//char ch[] = "wukong";
	//char ch1[20];
	////char *ch1;		������һ��ָ������������
	//scanf("%s", &ch1);
	////cin >>ch1;
	//if (ch1 == ch)
	//	cout << "1"<<endl ;
	//else
	//	cout << "0"<<endl 
	//����ʧ��	�޷��������
	
	//�ڶ��β���
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
	//������� ��0���棨����������	��0==1	��1==0	��-1==1
	//strcmp����	0�����	1������ -1��С��

	check_char();
	cout << "====================================================================="<<endl;
	check_string();
	system("pause");
}

/*
	��VS2017�е���������
	�� ӭ �� �� char�� �� �� �� ½ ʹ ��
	�� �� �� �� �� �� �� wukong
	�� �� �� �� �� �� 123456
	=====================================================================
	�� ӭ �� �� string�� �� �� �� ½ ʹ ��
	�� �� �� �� �� �� �� wukong
	�� �� �� �� �� �� 123456
	�밴���������. . .
*/