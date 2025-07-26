#include<stdio.h>
struct Movie {
	char mName[20];
	int count;
	float rating;
}obj1={"Drishyam",2,8.5};
void main () {
typedef struct Movie mv;
mv obj2={"kantaara",10,9.9};
 mv *ptr1=&obj1;
mv *ptr2=&obj2;

//Access
printf("%s\n",(*ptr1).mName);
printf("%d\n",(*ptr1).count);
printf("%f\n",(*ptr1).rating);

printf("%s\n",ptr2->mName);
printf("%d\n",ptr2->count);
printf("%f\n",ptr2->rating);
	}
