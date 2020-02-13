#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *h;

void create (int n) {
    struct node *p,*q;
        int i,x;
         h = 0, q = 0;
         for (i = 0 ; i<n ; i+=1) {
            p = (struct node *) malloc(sizeof(struct node));
            printf("Enter X: ");
            scanf("%d",&x);
            p -> data = x;
            if (h == 0)
                h = p;
            else if (q != 0)
                q -> next = p;
            q = p;
         }
         q -> next = NULL;
}

void insert()
    {
        struct node *p, *q;
        int x,y;
        q = h;
        printf("After which element: ");
        scanf("%d",&y);
        while (p!=0) {
            if(q ->data != y) {
                q = q ->next;
            }
            else {
                p = (struct node*) malloc(sizeof(struct node));
                printf("Enter Data: ");
                scanf("%d",&x);
                p ->data = x;
                p ->next = q ->next;
                q ->next = p;
                break;
            }
        }
    }

void delete(){
    struct node *q,*p;
    int y;
    q=h; p=0;
    printf("\nWhich  element:");
    scanf("%d",&y);
    while(q!=0){
        if(q->data==y){
            if(q==h)
                h=h->next;
        else
            p->next = q->next;
            break;
        }
        else{
            p=q;
            q=q->next;
        }
    }
}

void display(){
    struct  node *p;
    p=h;
    printf("\nThe  list is: ");
    while(p!=0){
        printf("%d ",p->data);
        p=p->next;
    }
}

int menu()
{
		int i,x;
		printf("***LINKED LIST***\n");
		while(1) {
			printf("\n1. Create\n2. Insert\n3. Delete\n4. Display\n5. Exit\nEnter Your Option(1-5): ");
			scanf("%d",&i);
			switch(i) {
                case 1: printf("How many Nodes: ");
                             scanf("%d",&x);
                             create(x);
                             printf("List is Created successfully. . . .\n");
                             break;
				case 2: insert();
                             printf("Insertion is done successfully. . . .\n");
                             display();
                             break;
				case 3: delete();
                             printf("Deletion is done succesfully. . . .\n");
                             display();
                             break;
				case 4: display();
                             break;
				case 5: printf("The program is finished. . .");
                             break;
				default: printf("Please, make a valid choice. . .\n");
                               break;
                }
                if (i == 5)
                    break;
			}
		return i;
}
int main()
{
	int j;
	j = menu();

	return 0;
}

