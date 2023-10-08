#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{

    goodMorning();

    return 0;
}
void goodMorning()
{
    printf("Good Morning Nisarg\n");
     goodAfternoon();
}
void goodAfternoon()
{
    printf("Good Afternoon Nisarg\n");
    goodNight();
}
void goodNight()
{
    printf("Good Night Nisarg\n");
}