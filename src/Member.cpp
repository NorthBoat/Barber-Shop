#include "Member.h" 
int Member::Count = 0;
Member::Member(int num, string name, long long phone, double remaining, int credits)
{
	Num = num;
	Name = name;
	Phone = phone;
	Remaining = remaining;
	Credits = credits;
}
void Member::Set()
{
	cout << "�����Ա�ţ�";
	cin >> Num;
	cout << "��Ա������";
	cin >> Name;
	cout << "�ֻ��ţ�";
	cin >> Phone;
	Credits = 0;
	Remaining = 0;
	Discount = 0.9;	
	Recharge(); //�ڴ�����Աʱͬʱ���һ�� 
	cout << "��¼�룡" << endl;
	Member::Count++;	
	Display();
}
void Member::Display()
{
	cout << "��Ա�ţ�" << Num << "  ������" << Name  << "  ��ϵ��ʽ��" << Phone << "  ��Ա���֣�" ;
	cout << Credits << "  �˻���" << Remaining << "  ��ǰ�ۿۣ�" << Discount*10 << "��" << endl << endl;
}
void Member::Cost()
{
	cout << "�����û�����������Ŀ��1.ϴ(10Ԫ/��)	   2.����25Ԫ/�Σ�	   	3.����100Ԫ/�Σ�\n";
	cout << "                      4.ϴ��(30Ԫ/��)      5.ϴ����(120Ԫ/��)\n";
	cout << "��ǰ�ۿۣ�"  << Discount << endl; 
	int n;
	cout << "��ѡ������������Ŀ��";
	cin >> n;
	switch (n)
	{
	case 1:
		if(Remaining >= 10*Discount)
		{
			Remaining = Remaining - 10*Discount;//ÿ"ϴ"һ������ȥ10Ԫ
			cout << "���ѳɹ������η���120Ԫ���ۿ�" << Discount << "��,ʵ�ʿ۷�" << 10*Discount << "Ԫ\n";
			cout << "��ǰ��" << Remaining << "\n\n";
		}
		else
		{
			cout << "���㣬����ʧ��\n\n";
		}
		break;
	case 2:
		if(Remaining >= 25*Discount)
		{
			Remaining = Remaining - 25 * Discount;//ÿ"��"һ������ȥ25Ԫ
			cout << "���ѳɹ������η���120Ԫ���ۿ�" << Discount << "��,ʵ�ʿ۷�" << 25*Discount << "Ԫ\n";
			cout << "��ǰ��" << Remaining << "\n\n";
		}
		else
		{
			cout << "���㣬����ʧ��\n\n";
		}
		break;
	case 3:
        if(Remaining >= 25*Discount)
        {
			Remaining = Remaining - 100 * Discount;//ÿ"��"һ������ȥ100Ԫ
			cout << "���ѳɹ������η���120Ԫ���ۿ�" << Discount << "��,ʵ�ʿ۷�" << 100*Discount << "Ԫ\n";
			cout << "��ǰ��" << Remaining << "\n\n";
		}
		else
		{
			cout << "���㣬����ʧ��\n\n";
		}		
		break;
	case 4:
		if(Remaining >= 30*Discount)
		{
			Remaining = Remaining - 30 * Discount;//ÿ"ϴ��"һ������ȥ30Ԫ
			cout << "���ѳɹ������η���120Ԫ���ۿ�" << Discount << "��,ʵ�ʿ۷�" << 30*Discount << "Ԫ\n";
			cout << "��ǰ��" << Remaining << "\n\n";
		}
		else
		{
			cout << "���㣬����ʧ��\n\n";
		}
		break;
	case 5:
		if(Remaining >= 120*Discount)
		{
			Remaining = Remaining - 120 * Discount;//ÿ"ϴ����"һ������ȥ120Ԫ
			cout << "���ѳɹ������η���120Ԫ���ۿ�" << Discount << "��,ʵ�ʿ۷�" << 120*Discount << "Ԫ\n";
			cout << "��ǰ��" << Remaining << "\n\n";
		}
		else
		{
			cout << "���㣬����ʧ��\n\n";
		}
		break;
	default:
		cout << "�޴˷������˳����β���\n\n";
		break;
	}
}
void Member::Recharge()
{
	double remaining;	
	cout << "�����ֵ��ÿ��ֵ50Ԫ��30Ԫ��ÿ��ֵ100Ԫ��25�֣������ۼ�100����Ϊ������Ա����";
	cin >> remaining;
	if(remaining < 0)
	{
		cout << "\n������ͼ��Bug��������ȷ���������ǲ����ܵ�\n\n";
	}
	else if(remaining >= 50)
	{
		Remaining += remaining + (int)(remaining/50) * 30;
		Credits += remaining * 0.25; 
	}
	else if(remaining < 50)
	{
		Remaining += remaining;
		Credits += remaining * 0.25;
	}
	cout << "��ǰ��" << Remaining << "  ��ǰ���֣�" << Credits << "\n\n";
}
int Member::getNum()
{
	return Num;
}
string Member::getName()
{
	return Name;
}
long long Member::getPhone()
{
	return Phone;
}
double Member::getRemaining()
{
	return Remaining;
}
double Member::getCredits()
{
	return Credits;
}
void Member::setNum(int num)
{
	Num = num;
}
void Member::setName(string name)
{
	Name = name;
}
void Member::setPhone(long long phone)
{
	Phone = phone;
}
void Member::setRemaining(double remaining)
{
	Remaining = remaining;
}
void Member::setCredits(double credits)
{
	Credits = credits;
}
void Member::setDiscount(double discount)
{
	Discount = discount;
}
