#include "Function.h"
void printMenu()
{
	cout << "* * * * * * * * * * * * * * * * * * * * * * * *\n";	
	cout << "* * * * * * * * * * * * * * * * * * * * * * * *\n";
	cout << "* * *     1���½���Ա                 * * * * *\n";
	cout << "* * *     2����ʾ��ʦ��Ϣ           * * * * *\n";
	cout << "* * *     3����ʾ������ͨ��Ա��Ϣ     * * * * *\n";
	cout << "* * *     4����ʾ����vip��Ա��Ϣ      * * * * *\n";
	cout << "* * *     5���޸���ʦ����           * * * * *\n";
	cout << "* * *     6��������ͨ��Ա��ѡ�����   * * * * *\n";
	cout << "* * *     7������vip��Ա��ѡ�����    * * * * *\n";
	cout << "* * *     8���½�vip��Ա              * * * * *\n"; 
	cout << "* * *     9����������                 * * * * *\n"; 
	cout << "* * *     0���˳�ϵͳ                 * * * * *\n";	
	cout << "* * * * * * * * * * * * * * * * * * * * * * * *\n";
	cout << "* * * * * * * * * * * * * * * * * * * * * * * *\n";
	cout << "* * * * * * * * * * * * * * * * * * * * * * * *\n";
	cout << endl;	 
}
void PrintService(Member member)
{
	cout << "���������û�" << member.getName() << "����ѡ������Ҫ�ķ���\n";
	cout << "* * *   1������           * * *\n";
	cout << "* * *   2����ֵ           * * *\n";
	cout << "* * *   3��ע���˻�       * * *\n"; 
	cout << "* * *   4����ʾ�û���Ϣ   * * *\n\n";
}
void PrintvipService(vipMember vip, Tony tonys[])
{
	cout << "���������û�" << vip.getName() << "����ѡ������Ҫ�ķ���\n";
	cout << "* * *   1������              * * *\n";
	cout << "* * *   2����ֵ              * * *\n";
	cout << "* * *   3��ע���˻�          * * *\n";
	cout << "* * *   4���޸�ר����ʦ    * * *\n";
	cout << "* * *   5�����ֻ���          * * *\n";
	cout << "* * *   6����ʾ�û���Ϣ      * * *\n\n";
}
string setSecret(string* secret)
{
	cout << "���ν���ϵͳ�������ù���Ա���룺";
	cin >> *secret;
	return *secret;
}
bool Loadin(string secret)
{
	string password;
	cout << "��Ҫ����ԱȨ�޲��ܽ��д�����������������룺";
	cin >> password;
	cout << endl; 
	if(password == secret)
	{
		return true;
	}
	else
	{
		cout << "��������˳����β���\n\n";
		return false;
	}
}
void PrintTony(Tony tonys[])//���������¼�����ʦ��Ϣ 
{
	for(int t = 0; t < 3; t++)
	{
		tonys[t].Show();
	}
}
void PrintMember(Member members[])
{
	if(Member::Count == 0)
	{
		cout << "������ͨ��Ա��Ϣ��" << endl << endl;	
	} 
	for(int t = 0; t < Member::Count; t++)
	{
		members[t].Display();
	}
}
void PrintVip(vipMember vips[])
{
	if(vipMember::count == 0)
	{
		cout << "����vip��Ա��Ϣ��" << endl << endl;	
	} 
	for(int t = 0; t < vipMember::count; t++)
	{
		vips[t].Display();
	}
}
void UpdateTony(Tony tonys[])
{
	f:
	int num;
	cout << "��ѡ����Ҫ�޸ĵ���ʦ��ţ�";
	cin >> num;
	cout << endl;
	for(int t = 0; t < 3; t++)
	{
		if(num == tonys[t].getNum())
		{
			tonys[t].Update();
			break;
		}
		else if(t == 2 && num != tonys[t].getNum())
		{
			cout << "���޴���ʦ��\n";
			int i;	
			cout << "1������ѡ��\t2���˳�ѡ��\n����������ѡ��";
			cin >> i;
			switch(i)
			{
			case 1:
				goto f;
				break;
			case 2:
				cout << "���˳�������\n\n";
				break;
			default:
				cout << "����Ĳ����������ж�\n\n";
				break;
			}
		} 
	}
}
void SearchMember(Member members[], vipMember vip[], Tony tonys[])
{
	if(Member::Count == 0)
	{
		cout << "������ͨ��Ա��Ϣ\n\n";
	}
	else
	{
		int num;
		cout << "��������Ҫ���ҵĻ�Ա�˺ţ�";
		cin >> num;
		for(int t = 0; t < Member::Count; t++)
		{
			if(num == members[t].getNum())
			{
				PrintService(members[t]);
				int i;
				cout << "��ѡ������Ҫ�ķ���";
				cin >> i;
				switch(i)
				{
				case 1://���ѷ��� 
					members[t].Cost();
					break;
				case 2://��ֵ���� 
					members[t].Recharge();
					if(members[t].getCredits() >= 100)
					{
						Update(members[t], vip, tonys);
						Cover(t, members);
					}
					break;
				case 3://ɾ����Ա��Ϣ
					Cover(t, members);
					cout << "��ע����\n\n";
					break;
				case 4://��ʾ��Ա��Ϣ 
					members[t].Display();
					break;
				default:
					cout << "������󣬷����ж�\n\n"; 
					break;
				}
				break;
			}
			if(t == Member::Count-1 && num != members[Member::Count-1].getNum())
			{
				cout << "�˻������ڣ�\n\n";
			}
		}
	}
}
void Update(Member member, vipMember vips[], Tony tonys[])
{
	cout << "���ִ��ڵ���100����ϲ������Ϊvip��Ա��������ѡ��һλ��ʦ��Ϊ����ר����ʦ\n\n"; 
 	vips[vipMember::count].setNum(member.getNum());
 	vips[vipMember::count].setName(member.getName());
 	vips[vipMember::count].setPhone(member.getPhone());
 	vips[vipMember::count].setRemaining(member.getRemaining());
 	vips[vipMember::count].setCredits(member.getCredits());
 	vips[vipMember::count].setDiscount(0.75);
	PrintTony(tonys);
	vips[vipMember::count].Select(tonys);
	vips[vipMember::count].Display();
	vipMember::count++;
}
void Cover(int t, Member members[])
{
	for(int i = t; i < Member::Count-1; i++)
	{
		members[i].setNum(members[i+1].getNum());
		members[i].setName(members[i+1].getName());
		members[i].setPhone(members[i+1].getPhone());
		members[i].setRemaining(members[i+1].getRemaining());
		members[i].setCredits(members[i+1].getCredits());
	}
	Member::Count--;
}
void SearchVip(vipMember vips[], Tony tonys[])
{
	if(vipMember::count == 0)
	{
		cout << "����vip��Ա��Ϣ\n\n";
	}
	else
	{ 
		int num;
		cout << "��������Ҫ���ҵ�vip�˺ţ�";
		cin >> num;
		for(int t = 0; t < vipMember::count; t++)
		{
			if(num == vips[t].getNum())
			{
				PrintvipService(vips[t], tonys);
				int i;
				cout << "��ѡ������Ҫ�ķ���";
				cin >> i;
				switch(i)
				{
				case 1:
					vips[t].Cost();
					break;
				case 2:
					vips[t].Recharge();
					break;
				case 3:
					coverVip(t, vips);
					cout << "��ע����\n\n";
					break;
				case 4:
					PrintTony(tonys);				
					vips[t].Select(tonys);
					vips[t].Display();
					break;
				case 5:
					vips[t].Transform();
					break;
				case 6:
					vips[t].Display();
					break;
				default:
					cout << "������󣬷����ж�\n\n"; 
				break;
				}
				break;
			}
			if(t == vipMember::count-1 && num != vips[vipMember::count-1].getNum())
			{
				cout << "�˻������ڣ�\n\n";
			}		
		}	
	}
}
void coverVip(int t, vipMember vips[])
{
	for(int i = t; i < vipMember::count-1; i++)
	{
		vips[i].setNum(vips[i+1].getNum());
		vips[i].setName(vips[i+1].getName());
		vips[i].setPhone(vips[i+1].getPhone());
		vips[i].setRemaining(vips[i+1].getRemaining());
		vips[i].setCredits(vips[i+1].getCredits());
	}
	vipMember::count--;	
}
void resetSecret(string* Secret)
{
	R:
	string oldSecret;
	cout << "��������룺";
	cin >> oldSecret;
	if(*Secret == oldSecret)
	{
		string newSecret;
		cout << "\n���������룺";
		cin >> newSecret;
		*Secret = newSecret;
		cout << "�޸ĳɹ���\n\n";
	}
	else
	{
		char n;
		cout << "\n�������\n\n1������\t2���˳�����\n\n";
		cin >> n;
		switch(n)
		{
		case '1':
			goto R;
		case '2':
			cout << "���˳���\n\n";
			break;
		default:
			cout << "����Ĳ����������жϣ�\n\n";
			break;
		}
	}
}


