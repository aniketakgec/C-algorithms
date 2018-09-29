#include<stdio.h>
int main(){
char x[10];
int i=0,c,s=0;
scanf("%s",&x);
while(x[i]!='\0'){
i++;
}
int findVal(int c){
return 91-c;
}

    

for(int j=0;j<i;j++){
s=s+(pow(26,i-j-1)*findVal(x[j]));       
}


printf("%d",s);


return 0;}