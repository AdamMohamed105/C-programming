// Volume and surface area
#include<stdio.h>
int main(){
    int radius,height;
    double Pi=3.141592653589793;
    double Volume=Pi * radius * radius * height;
    double Surface_area=2*Pi*(radius)*(radius)+2*Pi*radius*height;

    printf("To get volume of the cylinder: \nEnter radius(r) :");
    scanf("%d", &radius);
    
    printf("Enter height :");
    scanf("%d", &height);
    
    Volume=Pi * radius * radius * height;
    printf("The volume of the cylinder is %.2f \n",Volume);
    
    printf("\nTo get the surface area of the cylinder: \nEnter radius(r) :");
    scanf("%d", &radius);
    
    printf("Enter height :");
    scanf("%d", &height);
    
    Surface_area=2*Pi*(radius)*(radius)+2*Pi*radius*height;
    printf("The Surface area of the cylinder is %.2f \n",Surface_area);
}