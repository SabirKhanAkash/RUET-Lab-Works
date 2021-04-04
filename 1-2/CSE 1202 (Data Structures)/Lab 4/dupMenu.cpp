#include<stdio.h>
#include<conio.h>
#define max 5
int front = 0, rear = 0;
int queue[max];
void enqueue()
{
	int element;
	if (rear == max) {
		printf("Queue is Full\n");
	}
	else {
		printf("Enter the element: ");
		scanf("%d",&element);
		queue[++rear] = element;
		printf("Enqueue done successfully. . .\n");
		}
}

void dequeue()
{
	if (rear == front)
		printf("Queue is empty\n");
	else {
		front++;
		printf("Dequeue done successfully. . . \n");
	}
}

void display()
{
    int i;
	if (rear == front)
		printf("Queue is empty. . . \n");
	else {
		for (i = front+1 ; i <= max ; i+=1)
			printf("%d  ",queue[i]);
		printf("\n");
	}
}

int menu()
{
		int i;
		while(1) {
			printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter Your Option(1-4): ");
			scanf("%d",&i);
			switch(i) {
				case 1: enqueue();
				break;
				case 2: dequeue();
				break;
				case 3: display();
				break;
				default:
				printf("Please, make a valid choice. . .\n");
				break;
			}
			if (i==4) {
				printf("The program is finished. . . \n");
				break;
			}
		}
		return i;
}
int main()
{
	int j;
	j = menu();

	return 0;
}
