#include<stdio.h>
int main(){
  int a[3],b[3],c1=0,c2=0;
    for(int i=0;i<3;i++)
        scanf("%d",&a[i]);
     for(int i=0;i<3;i++)
        scanf("%d",&b[i]);
     for(int i=0;i<3;i++)
     {
         if(a[i]>b[i])
             c1++;
         else if(a[i]<b[i])
             c2++;
           
             }     
         
     
    printf("%d %d",c1,c2);
    
    
    
    return 0;
}
