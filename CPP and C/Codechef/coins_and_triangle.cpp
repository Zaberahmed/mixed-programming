#include<cstdio>
using namespace std;

int main()
{
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
		long int n,c=0;
		int h=0;
		scanf("%ld",&n);
		while(1)
		{
			c=c+(h+1);
			if(c>n)
			break;
			else
			 h++;
		}
		printf("%d\n",h);
	}
	}
