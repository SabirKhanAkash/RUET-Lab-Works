#include<cstdio>
#define max 4
int front = 0, rear = 0;
int queue[max];
void enqueue()
{
	int element;
	if (rear == (max-1)) {
		rear = 0;
		if (rear == max) {
			rear = max -1;
		printf("Queue is Full\n");
	}
	else {
		if ((rear + 1) == front)
			printf("Queue is full\n");
		else
			printf("Enter the element: ");
			scanf("%d",&element);
			queue[rear++] = element;
		}
		printf("Enqueue done successsfully. . .\n");
}

void dequeue()
{
	if (rear == front)
		printf("Queue is empty");
	else {
		if (front = (n-1))
			front = 0;
		else
			front+=1;
		element = queue[front];
		printf("Dequeue done succesfully. . . \n");
	}
}

void display()
{
	if (rear == front)
		printf("Queue is empty. . . \n");
	else {
		for (i = front ; i < max ; i+=1)
			printf("%d  ",queue[i]);
		printf("\n");
	}
}

int menu()
{
		int i;
		while(1) {
			printf(" 1. Enqueue\n2. Dequeue\n3. Display\n4.Exit\nEnter Your Option(1-4):");
			scanf("%d",&i);
			switch(i) {
				case 1: enqueue(); display();
				break;
				case 2: dequeue(); display();
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

