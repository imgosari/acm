#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Person
{
	string name;
	int kor,eng,math;
};
bool cmp(const Person &u, const Person &v)
{
	if(u.kor > v.kor) // ���� ��������
		return true;
	else if(u.kor == v.kor) // ���� ������ ���ٸ�
	{
		if(u.eng < v.eng) // ���� ��������
			return true;
		else if(u.eng == v.eng) // ���� ������ ���ٸ�
		{
			if(u.math > v.math) // ���� ��������
				return true;
			else if(u.math == v.math) // ���� ������ ���ٸ�
				return u.name < v.name; // �̸� ��������
		}
	}
	return false; // �� �ܿ� false
}
int main()
{
	int n; 
	scanf("%d",&n);
	vector<Person> p(n);
	for(int i=0;i<n;i++)
		cin >> p[i].name >> p[i].kor >> p[i].eng >> p[i].math;
	sort(p.begin(), p.end(), cmp);
	for(int i=0;i<n;i++)
		cout << p[i].name << "\n";
	return 0;
}
