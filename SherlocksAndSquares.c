#include<stdio.h>
#include<math.h>

int main(){
    int T,i, a,b;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {  scanf("%d %d",&a,&b);
    
        
    int c=0,j;
 
    for(j=a;j<=b;j++)
    {
     double sr = sqrt(j); 
  if((sr - floor(sr)) == 0)
  {   c++;
  
   j+=sr*2;
  
  }
    } 
     printf("%d",c);
     printf("\n");
    }
     
   return 0;
}
    
    

      
    
    
    
    
    
    
    