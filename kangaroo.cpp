#include<stdio.h>

void Kangaroo(int ,int ,int ,int);
int main()
{
    int x1,x2,v1,v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    Kangaroo(x1, v1, x2,v2);
    return 0;
}
void Kangaroo(int x1,int v1,int x2,int v2)
{
    int count;
    if(v2>v1 && x1>=x2)
    {
        count=0;
        while(x1>=x2)
        {
            if(x1==x2)
            {
                printf("YES");
                count++;
            }
            x1+=v1;
            x2+=v2;
        }
        if(count==0)
        {
            printf("NO");
        }
    }
    else if(v1>v2 && x2>=x1)
    {
        count=0;
            while(x2>=x1)
        {
            if(x1==x2)
            {
                printf("YES");
                count++;
            }
            x1+=v1;
            x2+=v2;
        }
        if(count==0)
        {
            printf("NO");
        }
    }
    else if(v1==v2 && x1==x2)
    {
        printf("YES");
    }
    else {
    printf("NO");
    }
    
}
