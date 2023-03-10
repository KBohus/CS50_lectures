#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //int total = get_int("Total number of scores: "); para fazer mais dinâmico
    const int TOTAL = 3;

    int scores[TOTAL];
    for (int i = 0; i < TOTAL; i++)
    scores[i] = get_int("Score: ");
    
    printf("Average: %f\n", (float)(scores[1] + scores[2] + scores[3])/TOTAL);

//    printf("Average: %f\n", (float) average(TOTAL, scores));
}

//Aprenderei mais tarde como fazer 
// {int sum = 0;
//    for (int i = 0; i < length; i++)
//    {
//        sum = sum + array[i]; //mesmo que sum += array[i]
//    }
//    return sum / (float) length;
//}