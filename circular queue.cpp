#include<stdio.h>
#define SIZE 5
int circular_queue[SIZE];
int rear=-1,front=-1;
void enqueue(int);
void dequeue();
void display();
int is_empty();
int main()
{
	int choice,data;
	while(1)
	{

	printf("\n enter \n 1 for enqueue \n 2 for dequeue \n 3 for display \n 4 for exit ");
	scanf("%d",&choice);
	switch (choice)
    	{
			case 1:
			printf("\nenter data");
			scanf("%d", &data);
			enqueue(data);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
			default:
				printf("\n BYE BYE");
		case 4:
			is_empty();
			break;
		}
	}
	return 0;
}
void enqueue(int data)
{
	if((rear+1)%SIZE==front)
	{
		printf("\n queue is already full");
		return;
	}
	else if(rear==-1 && front==-1)
	{
		rear=(rear+1)%SIZE;
		front=(front+1)%SIZE;
	}
	else
	{
		rear=(rear+1)%SIZE;
	}
	circular_queue[rear]=data;
	printf("%d is enqueued successfully",circular_queue[rear]);
}
void dequeue()
{
	if(rear==-1 && front==-1)
	{
		printf("\n queue is already empty");
	}
	else if(rear==front)
	{
		rear=-1;
		front=-1;
	}
	else
	{
		front=(front+1)%SIZE;
		printf("%d is dequeued successfully",circular_queue[front]);
	}
}
	void display()
	{
		int i;
		if(rear==-1 && front==-1)
		{
			printf("\n queue is already empty");
		}
		else
		{
			printf("/n the element of the circular queue is:");
			for(i=front;i!=rear;i=(i+1)%SIZE)
			{
				printf("\n %d",circular_queue[i]);
			}
		}
			printf("\n %d",circular_queue[i]);
    }
    int is_empty()
    {
    	if(front==-1 && rear==-1)
    	{
    		return 1;
		}
		else
		{
			return 0;
		}
	}

		
		
