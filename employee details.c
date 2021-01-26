#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[30],department[30];
    int no,age,salary;
} 
Employee;
int main()
{
    int i, n=20;
    Employee emp[n];
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
	{
		printf("-----------------\n");
        printf("Employee %d:\n",i+1);
        printf("-----------------\n");
        printf("Name       : ");
        scanf("%s",&emp[i].name);
        printf("Emp.no     : ");
        scanf("%d",&emp[i].no);
        printf("Age        : ");
        scanf("%d",&emp[i].age);
        printf("Department : ");
        scanf("%s",&emp[i].department);
        printf("Salary     : ");
        scanf("%d\n",&emp[i].salary);
    }
    printf("-------------------\n");
    printf("Employees Details\n ------------------\n");
    for(i=0; i<n; i++)
	{
        printf("Name       :%s\n",emp[i].name);
        printf("Emp.no     :%d \n",emp[i].no);
        printf("Age        :%d \n",emp[i].age);
        printf("Department :%s \n",emp[i].department);
        printf("Salary     :%d \n",emp[i].salary);
    }
}


