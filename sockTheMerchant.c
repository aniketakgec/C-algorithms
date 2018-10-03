#include<stdio.h>
int main()
{  int n,a[100],count[100],s=0;
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
     scanf("%d",&a[i]);
  for(int i=1;i<=100;i++)
     count[i]=0;
  for(int i=1;i<=n;i++)
  {
      count[a[i]]++;
         
  }
     for(int i=1;i<=100;i++)
{
   if(count[i]>=2){
       int x=count[i];
      
           s=s+x/2;
          
      
   }      
         
}
 printf("%d",s);
    
    
    
    
    
    
    return 0;
}