

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,j,temp,ch1,ch2;
	char A[7];
	printf("ENTER ANY WORD \n");
	gets(A);
	int n=7;
    for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			ch1=A[j];
			ch2=A[j+1];
			if(ch1>ch2)
			{
				temp=A[j+1];
				A[j+1]=A[j];
				A[j]=temp;
			}
		}
	}
	puts(A);
}

