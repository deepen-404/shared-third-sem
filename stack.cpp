#include <stdio.h>
#include <stdlib.h>

void push(int stack[]);
void pop(int stack[]);
int checkEmpty();
int checkFull();
void traverse(int stack[]);

int size;
int i;
int choice;

int top = -1;

int main() 
{

    system("cls");
    printf("How many element do you want to store???\t:");
    scanf("%d", &size);
    int stack[size];

    do
    {
        printf("Choose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Check Empty\n5.Check Full\n6.Exit");
        printf("\nEnter your choice:\t");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            push(stack);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            traverse(stack);
            break;
        case 4:
            checkEmpty();
            break;
        case 5:
            checkFull();
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
    if (top == size - 1)
    {
        printf("Stack is full !!");
        return 1;
    }
    else
    {
        printf("Stack is still free !!\n");
        return 0;
    }
}

int checkEmpty()
{
    if (top == -1 || top < size - 1)
    {
        printf("Stack is empty !! You can store a integer in it !!!");
        return 1;
    }
    else
    {
        return 0;
    }
}

void pop(int stack[])
{
    if (!checkEmpty())
    {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
    else
    {
        printf("Stack is empty\n");
    }
}

void push(int stack[])
{
    if (!checkFull())
    {
        int value;
        printf("Enter the value to be pushed into the stack:\t");
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }
}

void traverse(int stack[])
{
    for (i = top; i >= 0; i--)
    {
        printf("%d element of the stack is %d \n", i + 1, stack[i]);
    }
}
