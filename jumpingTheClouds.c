#include<stdio.h>
int main(){
    int n,a[100],x,s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
         scanf("%d",&a[i]);
    
    for(i=0;i<n-1;)
{
        if(a[i]==0)
     {    int x=i+2;
         if(a[x]==1)
         { i++;
          s++;
         }
         
         else
         {   i=i+2;
          s++;
             
         }
           
    }
      
        
}

    
    printf("%d",s);
    
    
    return 0;
}