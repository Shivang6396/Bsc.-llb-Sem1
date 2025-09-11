#include<stdio.h>
int main()
{
    int day;
    printf("enter day number (1-4\day)");
    scanf('%d',&day);
    switch(day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2 :
        printf("tuesday\n");
        break;
    case 3 :
        printf("wedesday\n");
        break;
    case 4 :
        printf("thursday\n");
    }
}
