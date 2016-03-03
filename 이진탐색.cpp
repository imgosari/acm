#include <stdio.h>
int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int s = 2;
void recur_search(int left, int right, int cnt) // Àç±Í ÀÌÁø Å½»ö
{
	int m = (left+right)/2; 
	++cnt;
	if(arr[m] == s)
	{
		printf("Search : %d", cnt);
		return;
	}
	else
	{
		if(m==1)
			return;
	}
	if(s < arr[m])
		recur_search(left, m-1, cnt);
	else
		recur_search(m+1, right, cnt);
}
void loop_search(int left, int right, int cnt)
{
	while(true)
	{
		int m = (left+right)/2; 
		++cnt;
		if(arr[m]==s)
		{
			printf("Search : %d", cnt);
			break;
		}
		else
		{
			if(m==1)
				break;
		}
		if(s < arr[m])
			right = m-1;
		else
			left = m+1;
	}
}
int main()
{
	// Àç±ÍÈ£Ãâ
	//recur_search(1, 10, 0);	 
	loop_search(1, 10, 0);
	return 0;
}

