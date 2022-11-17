#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Member
{
public:
	static int Count;//��¼��ͨ��Ա����	
	Member(){}//���캯�� 
	Member(int num, string name, long long phone, double remaining, int credits);
	int getNum();//����ӿڵ���˽�г�Ա 
	string getName();
	long long getPhone();
	double getRemaining();
	double getCredits();
	void setDiscount(double discount);
	void setNum(int num);
	void setName(string name);
	void setPhone(long long phone);
	void setRemaining(double remaining);
	void setCredits(double credits);
	virtual void Set();//¼����Ϣ����
	virtual void Display();//��ӡ��Ϣ����
	virtual void Cost();//�޶������������޸��û����Ѵ���
	virtual void Recharge();//��ֵ���������Գ��
protected:
	double Discount;//��ͨ��Աͳһ�ۿ� 
private:	
	int Num;
	string Name;
	long long Phone;
	double Remaining;//�˻����
	double Credits;//�û�������	
};
