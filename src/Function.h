#include <iostream>
#include <string>
#include "vipMember.h"
using namespace std;
void printMenu();//��ӡ�������� 
void PrintService(Member member);//��ӡ��ͨ��Ա����˵� 
void PrintvipService(vipMember vip, Tony tonys[]);//��ӡvip��Ա����˵� 
void PrintTony(Tony tonys[]);//��ӡ������ʦ��Ϣ 
void PrintMember(Member members[]);//��ӡ��ͨ��Ա 
void PrintVip(vipMember vips[]);//��ӡVip��Ա 
void UpdateTony(Tony tonys[]);//����tony�ȼ���Ϣ 
void SearchMember(Member members[], vipMember vip[], Tony tonys[]);//������ͨ��Ա 
void SearchVip(vipMember vips[], Tony tonys[]);//����vip��Ա 
void Update(Member member, vipMember vips[], Tony tonys[]);//������ͨ��ԱΪ������Ա 
bool Loadin(string secret);//����Ա��¼ 
string setSecret(string* secret);//�������� 
void Cover(int t, Member members[]);//����������ע������ͨ��Ա���ﵽ "ɾ��"Ч�� 
void coverVip(int t, vipMember vips[]);//��Coverͬ�� 
void resetSecret(string* secret); 
