#include<stdio.h>

int main()
{
	int T,N;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		scanf("%d",&N);
		if(N%11 == 0)
			N = N+2;
		else if(N%4 == 0)
			N= N-2;
		else
			N = N*4;
		printf("%d",N);
	}
}
