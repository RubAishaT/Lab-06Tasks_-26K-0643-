#include <stdio.h>

int main()
{
    int cars[12];
    int sum = 0;
    float average;
    int overloaded = 0;
    int highest, lowest;
    int highestSignal, lowestSignal;

    // Input cars waiting at each signal
    for (int i = 0; i < 12; i++)
    {
        printf("Enter cars waiting at signal %d: ", i + 1);
        scanf("%d", &cars[i]);

        sum = sum + cars[i];
    }

    // Calculate average
    average = (float)sum / 12;

    // Initialize highest and lowest
    highest = cars[0];
    lowest = cars[0];
    highestSignal = 1;
    lowestSignal = 1;

    // Second loop: compare each signal with average
    for (int i = 0; i < 12; i++)
    {
        // Check overloaded signals
        if (cars[i] > average)
        {
            overloaded++;
        }

        // Find highest
        if (cars[i] > highest)
        {
            highest = cars[i];
            highestSignal = i + 1;
        }

        // Find lowest
        if (cars[i] < lowest)
        {
            lowest = cars[i];
            lowestSignal = i + 1;
        }
    }

    // Display results
    printf("\nAverage cars waiting = %.2f\n", average);

    printf("Number of overloaded signals = %d\n", overloaded);

    printf("Highest cars = %d at signal %d\n", highest, highestSignal);

    printf("Lowest cars = %d at signal %d\n", lowest, lowestSignal);

    printf("Difference between highest and lowest = %d\n", highest - lowest);

    return 0;
}