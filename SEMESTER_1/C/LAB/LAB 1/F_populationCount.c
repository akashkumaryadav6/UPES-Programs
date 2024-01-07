// The population of the town is 100000. The population has increased steadily at the rate
// of 10% per year for the last 10 years. Write a program to determine the population at the
// end of each year in the last decade.

#include <stdio.h>
void populationCount(int pop);
int main()
{
    int pop = 100000;
    populationCount(pop);
    return 0;
}

void populationCount(int pop)
{
    for (int i = 1; i < 11; i++)
    {
        pop = pop + pop * 0.1;
        if (i < 10)
        {
            printf("\nPopulation at the end of 0%d year is: %d", i, pop);
        }
        else
        {
            printf("\nPopulation at the end of %d year is: %d", i, pop);
        }
    }
}