#include<stdio.h>

int main()
{
int i,j,k,diff,num,total=0,move=0;
int   avg;
int a[10][10];

for(j=1;j<=5;j++)
{
scanf("%d",&a[0][j]);
}

for(j=1;j<=5;j++)
{
printf("%d",a[0][j]);
}

for(j=1;j<=5;j++)
{
total=total+a[0][j];
}
avg =total/5;
for(j=1;j<=5;j++)
{
if(a[0][j]<avg)
{
num=avg-a[0][j];
while (num>=1)
{
for(k=1;k<=5;k++)
{
diff=a[0][k]-avg;
if(diff>=1)
{
a[0][j]=1+a[0][j];
a[0][k]=a[0][k]-1;
if(j<k)
{
move=move+(k-j);
}
else 
{
move=move+(j-k);
}
break;
}

}
num--;
}
}
}
printf("%d", move);

    return 0;
}