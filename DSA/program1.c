#include<stdio.h>
#include<string.h>
struct cricplayer {
	int jerNO;
	char pName[10];
	float sal;
}obj1={18,"virat",5.0f};
void main() {
	struct cricplayer obj2;
	obj2.jerNO=45;
	strcpy(obj2.pName,"Rohit");
	obj2.sal=5.0;
	printf("jerNO=%d\n",obj1.jerNO);
	printf("pName=%s\n",obj1.pName);
	printf("salary=%f\n",obj1.sal);
	
	printf("jerNO=%d\n",obj2.jerNO);
        printf("pName=%s\n",obj2.pName);
	printf("salary=%f\n",obj2.sal);
}

