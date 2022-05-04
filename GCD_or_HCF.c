#include<stdio.h>
int main()
{
    int n,m,i,max=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n*m;i++)
    {
        if(n%i==0 && m%i==0 )
        {
            if(max<i)
            {
                max=i;
            }
        }
    }
    printf("%d",max);
}