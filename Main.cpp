#include <iostream>
#include <math.h>
#include "Function.h"
#define MAX 1000
#define N 3
#include <fstream> 
static string Secret;
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
Member members[MAX];
vipMember vips[MAX/10];
Tony tonys[N] =
{
	Tony(1, "�����", "�߼�"), 
	Tony(2, "������", "�߼�"),
	Tony(3, "����ͩ", "����")
};

int main(int argc, char** argv) 
{
	cout << "                Hello World!" << endl;
	printMenu();//��ӡ������ʾ�˵� 
	setSecret(&Secret);
	while(true)//true��ѭ�� 
	{
		system("pause");
		system("cls"); 
		printMenu();
		char t;//ͨ�����벻ͬtֵ���벻ͬ��书�� 
		cout << "* * * * * * * \n";
		cout << "������ָ�";	
		cin >> t;
		cout << endl;
		switch(t)
		{
			case '0'://�˳�ϵͳ 
			{
		        goto FLAG;
			}
			case '1'://�½���Ա 
			{	
				members[Member::Count].Set();
				if(members[Member::Count-1].getCredits() >= MAX/10)
				{
					Update(members[Member::Count-1], vips, tonys);
					Cover(Member::Count-1, members);
				}
	   			break;
			}
			case '2'://��ӡ��ʦ��Ϣ 
			{
				PrintTony(tonys);
				break;
			} 
			case '3'://��ӡ��ͨ��Ա��Ϣ 
			{
				PrintMember(members);
				break;
			} 
			case '4'://��ӡvip��Ա��Ϣ 
			{ 
				PrintVip(vips);
				break;
			} 
			case '5'://������ʦ��Ϣ 
			{ 
				if(Loadin(Secret) == true)
				{
					PrintTony(tonys);
					UpdateTony(tonys);
				}
				break;
			}
			case '6'://������ͨ��Ա��������һ������ 
			{
				SearchMember(members, vips, tonys);
				break;
			}
			case '7'://����vip��Ա��������һ������
			{
				SearchVip(vips, tonys);
				break; 
			}
			case '8':
			{ 
				if(Loadin(Secret) == true)
				{
					vips[vipMember::count].Set();
					PrintTony(tonys);
					vips[vipMember::count-1].Select(tonys);
					vips[vipMember::count-1].Display();
				}
				break;
			}
			case '9':
			{
				resetSecret(&Secret);
				break;
			}
			default:
			{
				cout << "��������ȷ��ָ��!\n\n";
			 	break;
			}
        }
    }
	
	FLAG:
	cout << "���˳�ϵͳ����������رմ���" << endl; 
	system("pause"); 
	return 0;
}
