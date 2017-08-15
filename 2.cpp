#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[50];
	cin >> s;
	int len = strlen(s), j = 0;
	int maxnum = 0, num = 0, block[50] = { 0 };
	if (len == 1)  maxnum = 1;
	else
	{
		for (int i = 0; i<len-1; i++)
		{
		   if ( s[i] != s[i+1]) num++;
			else
			{
				if (num != 0)
				{
				block[j++] = num+1;
					num = 0;
				}
			}
		}
		maxnum = num+1;
		for (int k = 0; k<50; k++)
		{
			if (block[k]>maxnum)
				maxnum = block[k];
		}
	}
	cout << maxnum;
	return 0;
}
	