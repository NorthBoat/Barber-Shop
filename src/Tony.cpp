#include "Tony.h"
void Tony::Set()
{
	cin >> Num >> Name >> Grade; 		
} 
void Tony::Show()
{
	cout << "ר����ʦ��ţ� " << Num << " 	��ʦ������";
	cout << Name << "          ��ʦ����" << Grade << endl << endl; 
}
void Tony::Update()
{
	string grade;
	cout << "��������ʦ��Ҫ�޸ĵļ���";
	cin >> grade;
	Grade = grade;
	cout << "\n�޸ĳɹ���\n\n";
	Show();
}
int Tony::getNum()
{
	return Num;
}
