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
		arr[i] = t.substr(i,t.size()-i); // substr은 string에서 사용하는 것. 잘라내기.
	sort(arr.begin(), arr.end()); // algorithm 헤더파일로 정렬하기
	for(int i=0;i<t.size();i++)
		cout << arr[i] << "\n";
}