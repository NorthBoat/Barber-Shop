#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Tony
{
public:
	Tony() {}
	Tony(int num, string name, string grade) :Num(num), Name(name), Grade(grade) {};
	void Set();//������ʦ 
	int getNum();//���˽�г�Ա��� 
	void Show();//��ӡ��ʦ��Ϣ 
	void Update();//������ʦ���� 
private:
	int Num;
	string Name;
	string Grade;
};
