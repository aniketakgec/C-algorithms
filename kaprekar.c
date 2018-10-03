#include<stdio.h>
#include<math.h>

int main(){
   
    int p,q,d=0,i,c=0,z1;
    scanf("%d\n",&p);
   scanf("%d",&q);
   for(i=p;i<=q;i++)
   {

    
     float d=0,d2=0,d1,z;
long square=(long )i*i;
        int sq=square;
    while(sq!=0){
        sq=sq/10;
        d++;
    } 
    if(d!=1)
    { z=ceil(d/2.0);
         d1=(int)z;
    }
   else
        d1=d;
    
    int first=square/(pow(10,d1));
         int second= square-(pow(10,d1)*first);
    
    
    int sq1=second;
    while(sq1!=0){
        sq1=sq1/10;
        d2++;
    }
    int x1=second/pow(10,d2-1);
    if(x1!=0)
{   if((first+second)==i)
    {   printf("%d ",i);
c++;
    }
 
}
       
} 
    if(c==0)
        printf("INVALID RANGE");
    

  return 0;
}


    
