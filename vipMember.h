#pragma once
#include "Member.h"
#include "Tony.h"
class vipMember: virtual public Member//�̳���ͨ��Ա��
{
public:
	static int count;//��¼vip��Ա���� 	
	vipMember(){} //���캯�� �� 
	vipMember(int num, string name, int phone, double remaining, int credits):Member(num,name,phone,remaining,credits){Discount = 0.75;}//���캯�� �� 		
	void Select(Tony tonys[]);//����ѡ��ר����ʦ 
    void Display();	
	void Set();
	void Transform(); 
//	void Cost();
//  void Recharge();  
private:
	Tony* p;
};
