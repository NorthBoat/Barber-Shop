#include "vipMember.h"
int vipMember::count = 0;
void vipMember::Set()
{
	int num;
	cout << "�����Ա�ţ�";
	cin >> num;
	setNum(num);
	string name;
	cout << "��Ա������";
	cin >> name;
	setName(name);
	long long phone;
	cout << "�ֻ��ţ�";
	cin >> phone;
	setPhone(phone);
	setCredits(0);
	setRemaining(0);
	Discount = 0.75;	
	Recharge(); //�ڴ�����Աʱͬʱ���һ�� 
	cout << "��¼�룡\n\n";
	vipMember::count++;	
}
void vipMember::Select(Tony tonys[])
{
	F:
 	int n;
 	cout << "��ѡ������ר����ʦ��";
 	cin >> n;
 	switch(n)
 	{
 	case 1:
 		p = tonys;
 		break;
 	case 2:
 		p = &tonys[1];
 		break;
 	case 3:
 		p = &tonys[2];
 		break;
 	default:
 		cout << "��������ȷ�ı�ţ�" << endl;
 		goto F;
	}
}
void vipMember::Display()
{
	cout << "��Ա�ţ�" << getNum() << "  ������" << getName();
	cout << "  ��ϵ��ʽ��" << getPhone() << "  ��Ա���֣�";
	cout << getCredits() << "  �˻���" << getRemaining();
	cout << "  ��ǰ�ۿۣ�" << Discount*10 << "��" << endl;
	p->Show();
}
void vipMember::Transform()
{
	cout << "��ǰ�û����֣�" << getCredits() << endl;
	double credits;
	cout << "��������Ҫ�һ��Ļ��֣�";
	cin >> credits;
	if(credits <= getCredits())
	{
		setRemaining(getRemaining() + credits*0.5);
		setCredits(getCredits() - credits);
		cout << "��ǰ��" << getRemaining() << "  ��ǰ���֣�" << getCredits() << "\n\n";
	}
	else
	{
		cout << "���ֲ��㣬�����ж�" << "\n\n";
	}
}
