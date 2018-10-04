#include<stdio.h>
int main()
{   int i,j,n,score[1000],h_score[1000],l_score[1000],hscore=0,lscore=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
     scanf("%d",&score[i]);
 h_score[0]=score[0];
 l_score[0]=score[0];
 for(i=1;i<n;i++)
 {  if(score[i]>h_score[i-1])
  h_score[i]=score[i];
  
  else 
   h_score[i]=h_score[i-1];
        
 }  
  for(i=1;i<n;i++)
 {  if(score[i]>l_score[i-1])
  l_score[i]=l_score[i-1];
  
  else 
   l_score[i]=score[i];
        
 }  
     
     int max=h_score[0];
for(i=1;i<n;i++)
 {  if(h_score[i]>max)
 { hscore++;
  max=h_score[i];
 }
 
 }  
    int  min=l_score[0];
for(i=1;i<n;i++)
 {  if(l_score[i]<min)
 { lscore++;
  min=l_score[i];
 }
 
 }  
    
    printf("%d %d",hscore,lscore);
    
    
    
    
    
    
    
    
    return 0;
}