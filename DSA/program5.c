#include<stdio.h>
#include<string.h>
typedef struct Employee {
	char  empName[30];
	int empID;
	float sal;
	struct Employee *next;
}Emp;
void main () {
	Emp obj1,obj2,obj3;

       strcpy(obj1.empName,"Snehal");
       obj1.empID=1;
       obj1.sal=45.00;
       obj1.next=&obj2;

       strcpy(obj2.empName,"Shital");
       obj2.empID=2;
       obj2.sal=55.00;
       obj2.next=&obj3;


       strcpy(obj3.empName,"Shraddha");
       obj3.empID=3;
       obj3.sal=65.00;
       obj3.next=NULL;

       struct Employee *head =&obj1;

   

       printf("%s\n",obj2.next->empName);
       printf("%d\n",obj2.next->empID);
       printf("%f\n",obj2.next->sal);

       printf("%s\n",obj1.next->empName);
       printf("%d\n",obj1.next->empID);
       printf("%f\n",obj1.next->sal);
      
       printf("%s\n",head->empName);
       printf("%d\n",head->empID);
       printf("%f\n",head->sal);
}


