#include<stdio.h>
int main()
{
 int a[3] ,b[3],ap=0,bp=0;

 for(int i=0;i<3;i++)
 {
  scanf("%d",&a[i]);
 }

 for(int i=0;i<3;i++)
 {
  scanf("%d",&b[i]);
 }

 for(int i=0;i<3;i++)
 {
  if(a[i]>b[i])
  {
    ap++;
  }

  if(a[i]==b[i])
  {
    ap,bp;
  }

  if(a[i]<b[i])
  {
    bp++;
  }

 }

  printf("%d %d\n",ap,bp);

  return 0;
}
