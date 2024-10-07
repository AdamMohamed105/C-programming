#include <stdio.h>

int main() {
    int marks1, marks2, marks3, average;
    

    printf("Enter Marks for Computational Logic: ");
    scanf("%d", &marks1);

    printf("Enter Marks for Mathematics: ");
    scanf("%d", &marks2);

    printf("Enter Marks for English: ");
    scanf("%d", &marks3);

    average = (marks1 + marks2 + marks3) / 3;
    
    if(average>=70){
       printf("The grade is A\n");
    } else if(average>=60){
       printf("The grade is\n B");
    } else if(average>=50){
       printf("The grade is\n C");
    } else if(average>=40){
       printf("The grade is\n D");
    } else{
       printf("The grade is E(fail)" );
    
    }
}