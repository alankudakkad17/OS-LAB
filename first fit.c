#include<stdio.h>
#define max 25
void main()
{
int b[max],f[max],i,j,nb,nf,temp;
int bf[max],ff[max];
printf("\nEnter the number of blocks:");
scanf("%d",&nb);
printf("Enter the number of processes:");
scanf("%d",&nf);
printf("\nEnter the size of the blocks:-\n");
for(i=1;i<=nb;i++)
{
printf("Block %d:",i);
scanf("%d",&b[i]);
}
printf("Enter the size of the processes:-\n");
for(i=1;i<=nf;i++)
{
printf("Process %d:",i);
scanf("%d",&f[i]);
}
for(i=1;i<=nf;i++)
{
for(j=1;j<=nb;j++)
{
if(bf[j]!=1)
{
temp=b[j]-f[i];
if(temp>=0)
{
ff[i]=j;
break;
}
}
}
bf[ff[i]]=1;
}
printf("\nAllocation of blocks using first fit is as follows ");
printf("\nProcess No:\tProcess Size :\tBlock No:\tBlock Size:");
for(i=1;i<=nf;i++)
printf("\n%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]]);
printf("\n");
}
