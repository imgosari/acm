#include <stdio.h>
#include <sstream>
#include <string>
#include <map>
#include <queue>
#include <iostream>
using namespace std;
int start[4][4];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
map<int,int> m;
queue< pair<int,int> > q;
string intToString(int n)
{
	stringstream s;
	s << n;
	return s.str();
}
int main()
{
	int s_int=0; 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++) 
		{
			int t;
			scanf("%d",&t);
			if(t==0)
				t=9; 
			s_int = (s_int*10)+t;
		}
	} 
	m[s_int]=0;
	q.push(make_pair(s_int,0)); 
	while(!q.empty())
	{
		int deq=q.front().first;
		int deqc=q.front().second;
		q.pop();
		string s=intToString(deq); 
		int z=s.find('9');
		int x=z/3;
		int y=z%3; 
		for(int i=0;i<4;i++)
		{
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx>=0&&nx<3&&ny>=0&&ny<3)
			{ 
				string ts=s;
				swap(ts[x*3+y],ts[nx*3+ny]); 
				int after=stoi(ts);
				if(m.count(after)==0)
				{
					m[after]=deqc+1;
					q.push(make_pair(after,deqc+1));	
				}
			}
		} 
	} 
	if(m.count(123456789)==0)
		printf("-1");
	else
		printf("%d",m[123456789]);
}  