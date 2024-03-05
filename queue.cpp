#include <stdio.h>
#include <stdlib.h>

void insertItem(int queue[]);
void deleteItem(int queue[]);
void traverse(int queue[]);
int checkEmpty();
int checkFull();

int rear = -1;
int front = -1;
int size;
int choice;

int main()
{
    system("cls");
    printf("Enter the no of integers to save in the queue ??\t:");
    scanf("%d", &size);
    int queue[size - 1];

    do
    {
        printf("Choose one from the below options...\n");
        printf("\n1.Insert item\n2.Delete Item\n3.Traverse Queue\n4.Check Empty\n5.Check Full\n6.Exit");
        printf("\nEnter your choice:\t");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            insertItem(queue);
            break;
        case 2:
            deleteItem(queue);
            break;
        case 3:
            traverse(queue);
            break;
        case 4:
            checkFull();
            break;
        case 5:
            checkEmpty();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice !!! Try again !!!!\n");
            exit(0);
            break;
        }
    } while (choice > 0 && choice != 6);

    return 0;
}

int checkFull()
{
    if (rear == size - 1)
    {
        printf("Queue is full !!\n");
        return 1;
    }
    else
    {
        printf("Queue is free !!\n");
        return 0;
    }
}

int checkEmpty()
{
    if ((front == -1 && rear == -1) || front >= rear)
    {
        printf("Queue is empty\n");
        return 1;
    }
    else
    {
        printf("Queue is free\n");
        return 0;
    }
}

void insertItem(int queue[])
{
    if (!checkFull())
    {
        int value;
        printf("Enter the value to add to the queue\t:");
        scanf("%d", &value);
        rear++;
        queue[rear] = value;
    }
}

void deleteItem(int queue[])
{
    if (!checkEmpty())
    {
    	
        front++;
        printf("%d has been deleted\n", queue[front]);
    }
}

void traverse(int queue[])
{
    if (!checkEmpty())
    {
        printf("Items in the queue are: ");
        for (int i = 0; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

