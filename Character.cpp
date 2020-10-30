#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int n,i,j,count;
	char ch[20];
	printf("ENTER ANY CHARACTER\n");
	gets(ch);
	printf("ENTER THE NUMBER OF LETTERS IN YOUR CHARACTER\n");
	scanf("%d",&n);
	count=0;
	
	for(i=0;i<n;i++)
	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
		count++;
	}
	if(count>=3)
	{
		for(i=0;i<n;i++)
		{
			if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
			{
				for(j=i;j<n;j++)
				{
					ch[j]=ch[j+1];
				}
			}
		}
	}
	puts(ch);
	return 0;
	
}
