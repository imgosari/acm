#include <stdio.h>  
#include <queue>
#include <string> // string 클래스
#include <string.h> // memset
#include <iostream>
#include <algorithm>
using namespace std;  
int s,e;
int vcnt[10001]; // 항상 배열은 여유롭게
int from[10001];
char how[10001];
int D(int n)
{ 
	return (n*2)%10000; 
}
int S(int n)
{
	if(n-1==-1) // 이게 핵심이여
		return 9999;
	else
		return n-1;
}
int L(int n) // 수학... 잘 생각 해 보자
{
	return ((n%1000)*10)+n/1000;
}
int R(int n)
{
	return (n/10)+(n%10)*1000;
}
void bfs(int st, int ed)
{  
	queue< pair<int,int> > q;
	vcnt[st]=1;
	q.push(make_pair(st,0));
	while(!q.empty())
	{
		int d=q.front().first; 
		int dc=q.front().second;
		q.pop();
		int t;
		t=D(d); 
		if(!vcnt[t]) 
		{
			q.push(make_pair(t,dc+1));
			vcnt[t]=dc+1;
			from[t]=d;
			how[t]='D';
		}
		t=S(d); 
		if(!vcnt[t]) 
		{
			q.push(make_pair(t,dc+1));
			vcnt[t]=dc+1;
			from[t]=d;
			how[t]='S';
		}
		t=L(d); 
		if(!vcnt[t]) 
		{
			q.push(make_pair(t,dc+1));
			vcnt[t]=dc+1;
			from[t]=d;
			how[t]='L';
		}
		t=R(d); 
		if(!vcnt[t])
		{
			q.push(make_pair(t,dc+1));
			vcnt[t]=dc+1;
			from[t]=d;
			how[t]='R';
		}
		if(d==ed) 
			break;	 
	} 
	string ans = "";
	while (st != ed) {
		ans+=how[ed];
		ed=from[ed];
	}
	reverse(ans.begin(), ans.end());
	cout << ans << '\n';
}
int main()
{ 
	int n;
	scanf("%d",&n);
	for(int t=0;t<n;t++)
	{
		memset(from,0,sizeof(from));
		memset(vcnt,0,sizeof(vcnt)); 
		memset(how,0,sizeof(how));
		scanf("%d %d",&s,&e);
		bfs(s,e);   
	}
} 