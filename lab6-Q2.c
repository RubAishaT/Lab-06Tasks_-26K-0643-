#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char passwords[5][50];
    int scores[5] = {0};
    int strongest = 0;
    int below10 = 0;

    // Input 5 passwords
    for (int i = 0; i < 5; i++)
    {
        printf("Enter password %d: ", i + 1);
        scanf("%s", passwords[i]);
    }

    // Calculate strength score
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; passwords[i][j] != '\0'; j++)
        {
            if (islower(passwords[i][j]))
            {
                scores[i] += 1;
            }

            if (isupper(passwords[i][j]))
            {
                scores[i] += 2;
            }

            if (isdigit(passwords[i][j]))
            {
                scores[i] += 3;
            }
        }

        // +5 if length is 8 or more
        if (strlen(passwords[i]) >= 8)
        {
            scores[i] += 5;
        }

        // -3 if password contains "123"
        if (strstr(passwords[i], "123") != NULL)
        {
            scores[i] -= 3;
        }

        // Find strongest password
        if (scores[i] > scores[strongest])
        {
            strongest = i;
        }

        // Count passwords below 10
        if (scores[i] < 10)
        {
            below10++;
        }
    }

    // Print each password with its score
    printf("\nPassword Scores:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s = %d\n", passwords[i], scores[i]);
    }

    printf("\nStrongest Password: %s\n", passwords[strongest]);
    printf("Strongest Score: %d\n", scores[strongest]);

    printf("Number of passwords below 10: %d\n", below10);

    return 0;
}