#include<stdio.h>
int main(){
    
    int n,a[100],s=0,i,c=0,j,d,m;
    scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
    scanf("%d",&d);
    scanf("%d",&m);

     for(i=0;i<n;i++)
 {      for(j=0;j<m;j++)
       s=s+a[i+j];
    if(s==d)
        c++;
     s=0;
           
}        
    
 printf("%d",c);   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}