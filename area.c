// Area of a rectangle
#include <stdio.h>
int main(){
    int Length,Width,Mult; // Declaration and initialisation
    printf("Enter Length");
    scanf("%d",&Length);
    printf("Enter Width");
    scanf("%d",&Width);
    Mult=Length*Width;
    printf("The area of the rectangle is %d",Mult);
    
    return 0;
    
}