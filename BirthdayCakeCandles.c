#include<stdio.h>

int main(){
     int a[100000],count=0;
    int i,j,n,max;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
   max=a[0];
    for( i=0;i<n;i++)
       {
        if(a[i]>max)
            max=a[i];
    }
  
    for( i=0;i<n;i++)
    {
        if(a[i]==max)
            count++;
    }

   printf("%d",count);
    
      return 0;
    


    }