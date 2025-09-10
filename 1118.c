#include<stdio.h>

// Function to calculate the average
void calculate()
{
    float X, score[2], average;
    int i = 0;

    while (i < 2)
    {
        scanf("%f", &X);

        if (X >= 0 && X <= 10)
        {
            score[i] = X;
            i++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    // Calculate and print the average
    average = (score[0] + score[1]) / 2.0;
    printf("media = %.2f\n", average);

    // Call the loop function to ask for new calculation
    loop();
}

// Function to handle new calculation prompt
void loop()
{
    int choice;

    while (1) // লুপ চলবে যতক্ষণ না সঠিক ইনপুট আসে
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &choice);

        if (choice == 1) {
            calculate(); // নতুন গড় গণনা শুরু
            break;
        }
        else if (choice == 2) {
            break; // প্রোগ্রাম বন্ধ
        }

    }
}


int main()
{
    // Start the first calculation
    calculate();

    return 0;
}
