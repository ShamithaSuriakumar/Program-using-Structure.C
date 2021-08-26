#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    int empnum;
    char empname[30];
    char deptname;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        
        printf("empnum: ");
        scanf("%d",employees[i].empnum);
        
        printf("empname: ");
        scanf("%c",&employees[i].empname);
        //Salary
        printf("deptname: ");
        scanf("%c",&employees[i].deptname);
        
        printf("salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("empnum \t: ");
        printf("%d \n",employees[i].empnum);
 
        printf("empname \t: ");
        printf("%c \n",employees[i].empname);
        
        printf("deptname \t: ");
        printf("%c \n",employees[i].deptname);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
