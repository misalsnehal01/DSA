#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct OTT {
	char pName[20];
	int userCount;
	float price;
};
void main () {
       struct OTT* ptr1=(struct OTT*)malloc (sizeof(struct OTT));
strcpy(ptr1->pName,"primevideo");
ptr1->userCount=10000;
ptr1->price=305.50;

struct OTT* ptr2=(struct OTT*)malloc(sizeof(struct OTT));
strcpy(ptr2->pName,"NetFlix");
ptr2->userCount=20000;
ptr2->price=300.50;
}



