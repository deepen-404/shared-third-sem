#include <stdio.h>
#include <stdlib.h>

int size;
int choice;

void insertAtIndex(int *arr);
void deleteAtIndex(int *arr);
void modifyAtIndex(int *arr);
void traverse(int *arr);
void checkIndex(int index);

int main()
{
    system("cls");
    printf("Enter the no of integers to save in the list:\t");
    scanf("%d", &size);
//
    int *arr = (int *)calloc(size, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }

//        int* arr = (int*)malloc(size * sizeof(int));
//        if(arr == NULL) {
//            printf("Memory not allocated.\n");
//            exit(0);
//        }

    do
    {
        printf("\nChoose one from the below options...\n");
        printf("\n1.Insert Item\n2.Delete Item\n3.Modify Item\n4.Traverse\n5.Exit\n");
        printf("\nEnter your choice:\t");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            insertAtIndex(arr);
            break;
        case 2:
            deleteAtIndex(arr);
            break;
        case 3:
            modifyAtIndex(arr);
            break;
        case 4:
            traverse(arr);
            break;
        case 5:
            free(arr);
            exit(0);
        default:
            printf("Invalid choice !!! Try again !!!!\n");
            free(arr);
            exit(0);
            break;
        }
    } while (choice > 0 && choice != 6);

    return 0;
}

void insertAtIndex(int *arr)
{
    int value, index;

    printf("\nEnter the index you want the insert the element into:\t");
    scanf("%d", &index);

    checkIndex(index);

    printf("\nEnter the element you want insert at the specified index:\t");
    scanf("%d", &value);

    // Shift elements to the right of the index
    for (int i = size; i > index; i--) 
    {
        arr[i] = arr[i - 1];
    }

    // Insert the value at the given index
    arr[index] = value;
}

void deleteAtIndex(int *arr)
{

    int value, index;

    printf("\nEnter the index you want the delete the element into:\t");
    scanf("%d", &index);

    checkIndex(index);

    printf("\nEnter the element you want delete at the specified index:\t");
    scanf("%d", &value);

    // Shift elements to the left of the index
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void modifyAtIndex(int *arr)
{

    int newValue, index;

    printf("\nEnter the index you want to modify into:\t");
    scanf("%d", &index);

    checkIndex(index);

    printf("\nEnter the element you want modify at the specified index:\t");
    scanf("%d", &newValue);

    arr[index] = newValue;
}

void checkIndex(int index)
{

//    printf("The value of the index to be checked is %d:\t", index);
    if (index < 0 || index >= size - 1)
    {
        printf("Invalid index\n");
        return;
    }
}

void traverse(int *arr)
{
    printf("\nItems in the element are:\t");
    for (int i = 0; i < size ; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d\t", arr[i]);
        }
        else
        {
            printf("N/A\t");
        }
    }
}

