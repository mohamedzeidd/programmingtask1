// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    char users[10][2][30];
    int counter = 0;

    int n = 0;

    while (n != 3)
    {
        printf("\n1 Login \n2 Register \n3 Exit \n");
        printf("Choose option \n");
        scanf("%d", &n);

        if (n == 2)
        {
            char username[30];
            char password[30];
            printf("Enter username \n");
            scanf("%s", username);

            printf("Enter password \n");
            scanf("%s", password);
            strcpy(users[counter][0], username);
            strcpy(users[counter][1], password);
            counter++;
            printf("register success\n");
        }

        if (n == 1)
        {
            char username[30];
            char password[30];
            printf("Enter username \n");
            scanf("%s", username);
            printf("Enter password \n");
            scanf("%s", password);

            bool success = false;
            for (int i = 0; i < 100; i++)
            {

                int a = strcmp(users[i][0], username);
                int b = strcmp(users[i][1], password);
                if (a == 0 && b == 0)
                {
                    printf("login success");
                    success = true;
                    break;
                }
            }
            if (success == false)
            {
                printf("login failed");
            }
        }
    }

    return 0;
}