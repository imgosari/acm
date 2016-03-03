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
	if(u.kor > v.kor) // 국어 내림차순
		return true;
	else if(u.kor == v.kor) // 국어 점수가 같다면
	{
		if(u.eng < v.eng) // 영어 오름차순
			return true;
		else if(u.eng == v.eng) // 영어 점수가 같다면
		{
			if(u.math > v.math) // 수학 내림차순
				return true;
			else if(u.math == v.math) // 수학 점수도 같다면
				return u.name < v.name; // 이름 내림차순
		}
	}
	return false; // 그 외엔 false
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
