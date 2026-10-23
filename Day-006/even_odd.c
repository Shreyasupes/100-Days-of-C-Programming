#include<stdio.h>
int main(){
int num;
//Prompt user for input
printf("8:");
scanf("%d",&num);
// Decision logic
if (num%2==0){
printf("%d is an Even number.\n",num);
}else{
printf("%d is an Odd number.\n",num);
}
return 0;
}
