#include<stdio.h>
int greg(int y);
int julian(int year);
int main(){
    int y,x,z;
    scanf("%d",&y);
  if(y>=1700&&y<=1917)
  {  
      if(julian(y)==1){
          x=256%244;
          z=256/244;
          if(x<10)
           printf("%d.09.%d",x,y);
             else
      printf("%d.09.%d",x,y);
      }
      
      
      else   {
          x=256%243;
          z=256/243;
          if(x<10)
         printf("%d.09.%d",x,y);
             else
           printf("%d.09.%d",x,y);
      }
      
  }  
    else if(y>=1919&&y<=2700)
  {
       if(greg(y)==1){
          x=256%244;
          z=256/244;
          if(x<10)
    printf("%d.09.%d",x,y);
             else
           printf("%d.09.%d",x,y);
       }
        else {
          x=256%243;
          z=256/243;
         
      
        
    
            if(x<10)
           printf("%d.09.%d",x,y);
             else
          printf("%d.09.%d",x,y);
      }
  }  
    else if(y==1918)
    {
        
       
          x=256%230;
          z=256/230;
          
          
        if(x<10)
           printf("%d.09.%d",x,y);
             else
      printf("%d.09.%d",x,y);
      
         
        
        
        
    }
            
           
return 0; 
}
int greg(int y){ 
    if ((y% 4 == 0) && (y % 100!= 0) || (y%400 == 0))
     return 1;
    else
        return 0;
    
}
int julian(int year){
    if ((year% 4 == 0) )
     return 1;
    else
        return 0;
    
}
