#include <stdio.h>
#define MAX_LENGTH 100

int main(void)
{
    system("cls");
    int data[MAX_LENGTH];
    int length = 0;
    int value, index;

    int input;

    do
    {
        printf("Menu: \n");
        printf("----------------------\n");
        printf("1. Add\n");
        printf("2. Insert\n");
        printf("3. Edit\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Clear\n");
        printf("0. Exsit\n");
        printf("----------------------\n");

        printf("Enter A Menu: ");
        scanf("%d", &input);
        system("cls");

        printf("-----Result------\n");
        switch (input)
        {
        case 0:
            // Do nothing, just terminate
            break;
        case 1:
            // Add operation
            printf("Plase Enter an Interger value: ");
            scanf("%d", &value);

            data[length] = value;
            printf("%d inserted at index %d \n", value, length);
            length++;
            break;
        case 2:
            // Insart operation
            printf("Plase Enter an Interger value: ");
            scanf("%d", &value);
            printf("Plase Enter an Index Between 0 - %d: ", length);
            scanf("%d", &index);

            for (int i = length; i > index; i--)
            {
                data[i] = data[i - 1];
            }
            data[index] = value;
            length++;

            printf("%d Insrted at Index %d\n", value, index);

            break;
        case 3:
            // Edit operation
            printf("Plase Enter an Index Between 0 - %d: ", length - 1);
            scanf("%d", &index);
            printf("Plase Enter an Interger value: ");
            scanf("%d", &value);

            data[index] = value;
            printf("%d updated at index %d\n", value, index);

            break;
        case 4:
            // Detete operation
            printf("Plase Enter an Index Between 0 - %d: ", length - 1);
            scanf("%d", &index);

            int dv = data[index];

            for (int i = index; i < length; i++)
            {
                data[i] = data[i + 1];
            }
            data[length] = 0;
            length--;

            printf("%d deleted at index %d\n", dv, index);

            break;
        case 5:
            // Display item using a for loop
            if (length == 0)
            {
                printf("There is no data\n");
            }
            else
            {
                printf("DATA: ");
                for (int i = 0; i < length; i++)
                {
                    printf("%d\t", data[i]);
                }
                printf("\n");
            }
            break;
        case 6:
            // Date Clear
            for (int i = 0; i < length; i++)
            {
                data[i] = 0;
            }
            length = 0;
            break;
        default:
            printf("Invalid input \n");
        }

        printf("-----Result End------\n\n");
    } while (input != 0);
    system("cls");
    printf("Thanks for using our application. Good Bye\n");

    return 0;
}