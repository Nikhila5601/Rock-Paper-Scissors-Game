#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int rockpapersci(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
}
int main()
{
    int Ycount = 0, Ccount = 0;
    int number;
    char you, comp;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Enter r for rock or p for paper or s for scissor : ");
        scanf("%c", &you);
        int result = rockpapersci(you, comp);
        printf("The Computer chose %c and you chose %c \n", comp, you);
        if (result == 0)
        {
            printf("Draw\n");
        }
        else if (result == 1)
        {
            printf("You Won\n");
            Ycount++;
        }
        else if (result == -1)
        {
            printf("Computer Won\n");
            Ccount++;
        }
        fflush(stdin);  //So that scanf can take FRESH values for every loop
    }
    printf("You got %d points \nComputer got %d points\n", Ycount, Ccount);
    if (Ycount > Ccount)
    {
        printf("Hurray!!, You Won the Game\n");
    }
    else if (Ycount < Ccount)
    {
        printf("Computer Won,Better luck next time\n");
    }
    else if (Ycount == Ccount)
    {
        printf("Game Draw!! Play again\n");
    }
    return 0;
}