#include<stdio.h>
int main()
{
   int m,n,i,j,s=0,p;
   scanf("%d%d",&m,&n);
   int a[m],arr[n];
   for(i=0 ; i<m ; i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0 ; i<n ; i++)
   {
       scanf("%d",&arr[i]);
   }
   p=0;
   for(i=0 ; i<n ; i++)
   {
       s=0;
       for(j=p ; j<m ; j++)
       {
           if(arr[i]==a[j])
           {
               s=1;
               p=j+1;
               break;
           }
       }
   }
   if(s==0)
    printf("NO");
   else
    printf("YES");
   return 0;
}
