#include <stdio.h>
#include <string.h>

    struct Employee{
    char name [25];
    int ID;
    char department [20];
    float salary;
    char email [50];
    }employee1;
    
    int main(){
        strcpy(employee1.name,"John Doe");
        employee1.ID=12345;
        strcpy(employee1.department,"Human resources");
        employee1.salary=55000.50;
        strcpy(employee1.email,"john.doe@company.com");
        
        printf("Name : %s \n",employee1.name);
        printf("ID : %d \n",employee1.ID);
        printf("Department : %s \n",employee1.department);
        printf("Salary : %.2f \n",employee1.salary);
        printf("Email : %s \n",employee1.email);
    }