// https://www.acmicpc.net/problem/11656
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string t;
	cin >> t;
	vector<string> arr(t.size());
	for(int i=0;i<t.size();i++)
		arr[i] = t.substr(i,t.size()-i); // substr�� string���� ����ϴ� ��. �߶󳻱�.
	sort(arr.begin(), arr.end()); // algorithm ������Ϸ� �����ϱ�
	for(int i=0;i<t.size();i++)
		cout << arr[i] << "\n";
}