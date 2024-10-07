// Simple Interest
// principle amount,time,rate
#include <stdio.h>
int main(){
    int principle_amount,time,rate;
    int Simple_interest=(principle_amount*time*rate)/100;
    
    printf("Enter principle_amount :");
    scanf("%d", &principle_amount);
    
    printf("Enter time :");
    scanf("%d", &time);
    
    printf("Enter rate :");
    scanf("%d", &rate);
    
    Simple_interest=(principle_amount*time*rate)/100;
    printf("The Simple_interest is %d \n",Simple_interest);
    
}