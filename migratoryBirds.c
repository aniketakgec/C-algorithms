#include<stdio.h>

int main(){
    int loc;
    long int n ;
    scanf("%ld",&n);
    long int a[200000],count[6];
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
      for(int i=0;i<6;i++){
       count[i]=0;
    }
    
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    int max=count[0];
    for(int i=0;i<6;i++){
     if(count[i]>max)
     { max=count[i];
       loc=i;
     }
}
    printf("%d",loc);
    
    
  


    
    
    
    
    return 0;
}

    
    