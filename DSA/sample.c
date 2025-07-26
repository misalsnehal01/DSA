#include<stdio.h>
int size=0;
int front=-1;
int rear=-1;
int flag=0;

int enqueue(int arr[]){
	if(rear==size-1) {
		return-1;
	}else{
		if(front==-1&&rear==-1) {
			front++;
	         }
		rear++;
	        printf("Enter Data:\n");
		scanf("%d",&arr[rear]);
	}
	return 0;
}
int Dequeue(int arr[]) {
	if(rear==-1){
		int flag=0;
	      return -1;
}else{
	flag=1;
	int val=arr[front];
	
       if(front==rear) {
	       front=-1;
	       rear=-1;
       }else{
	       front++;
       }
       return val;
}
}
int frontt(int arr[]) {
	if(front==-1) {
		 flag=0;
		return -1;
	}else{
		flag=1;
	
	return arr[front];
}
}
int printQueue(int arr[]) {
	if(front==-1)
		return-1;
	else{
		for(int i=front;i<=rear;i++){
			printf("%d",arr[i]);
		return arr[i];
	}
	}
	printf("\n");
}
void main () {
	printf("Enter the size of an array\n");
	scanf("%d",&size);
	int arr[size];
	char choice;
	do{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Front\n");
		printf("4.printQueue\n");
               
	int ch;
	printf("Enter the choice\n");
	scanf("%d",&ch);

	switch (ch) {
		case 1:
			{
				int ret=enqueue(arr);
				if(ret==-1)
					printf("Q overflow\n");
				else
					printf("%d is enqueue\n",ret);
			}
			break;

		case 2:
			{
				int ret=Dequeue(arr);
				if(ret==-1)
					printf("Q underflow\n");
				else
					printf("%d is Dequeue\n",ret);
			}
			break;
		case 3:
			{
				int ret=frontt(arr);
				if(ret==-1)
					printf("Q is Empty\n");
				else
					printf("Front = %d\n ",ret);
			}
			break;
		case 4:

			{
				int ret=printQueue(arr);
				if(ret==-1)
					printf("Q is Empty\n");
				else
					printf("%d \n ",ret);
			}
			break;
		default:
			printf("Invalid Input");
	}
	getchar();
	printf("continue ?\n");
	scanf("%c",&choice);
	}
		while(choice=='y' ||choice =='Y');
}








		

