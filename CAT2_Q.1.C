//A program to define a structure of employee
//Reg No:CT101/g/22430/24

#include <stdio.h>
#include <string.h>

struct employee {
    char name[25];
    int id ;
    char department[20];
    float salary;
    char email[50];
};

int main(){
    struct employee employee_1={
        "John Doe",
        12345,
        "Human Resource",
        55000.50,
        "johndoe@company.com"
    };
     printf(" DETAILS:\n");
    printf("name: %s\n", employee_1.name);
    printf("id: %d\n", employee_1.id);
    printf("department: %s\n", employee_1.department);
    printf("salary: %f\n", employee_1.salary);
    printf("email: %s\n", employee_1.email);

    return 0;
}
