#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Employee {
	int EmpID;
	char empName[20];
	float sal;

	struct Employee *next;

}Emp;
void main () {

Emp *emp1=(Emp*)malloc(sizeof(Emp));

Emp *emp2=(Emp*)malloc(sizeof(Emp));

Emp *emp3=(Emp*)malloc(sizeof(Emp));
 
emp1->EmpID=1;
strcpy(emp1->empName,"kanha");
emp1->sal=45.00;
emp1->next=emp2;

emp2->EmpID=2;
strcpy(emp2->empName,"Rahul");
emp2->sal=60.00;
emp2->next=emp3;

emp3->EmpID=3;
strcpy(emp3->empName,"Ashish");
emp3->sal=90.00;
emp3->next=NULL;

//Access
 
printf("%d\n",emp1->EmpID);
printf("%s\n",emp1->empName);
printf("%f\n",emp1->sal);
printf("%p\n",emp1->next);

}
