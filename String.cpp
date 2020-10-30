#include<stdio.h>
#include<conio.h>
#include<String.h>

int main()
{
	char N[100];
	int a,i,counter,j;
	j=0;
	counter = 0;
	gets(N);
	a=strlen(N);
	for(i=0;i<a;i++)
	{
		if(N[i]>=97&&N[i]<=122)
		{
			j++;
			if(N[i]==N[a-i-1])
			counter++;
		}
		else 
		break;
	}
    if(j==a)
    {
	if(counter==a)
	printf("YES");
	else
	printf("NO");
}

	return 0;
}
