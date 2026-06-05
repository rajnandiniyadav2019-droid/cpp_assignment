#include <stdio.h>

typedef struct Time
{
    int hr;
    int min;
    int sec;
} Time;

// Initialize time to 00:00:00
void initTime(Time *t)
{
    t->hr = 0;
    t->min = 0;
    t->sec = 0;
}

// Accept time from user
void acceptTime(Time *t)
{
    printf("Enter Hours Minutes Seconds: ");
    scanf("%d %d %d", &t->hr, &t->min, &t->sec);
}

// Display time
void displayTime(Time t)
{
    printf("%02d:%02d:%02d\n", t.hr, t.min, t.sec);
}

// Increment time by 1 minute
void incrementTimeBy1Min(Time *t)
{
    t->min++;

    if (t->min >= 60)
    {
        t->min = 0;
        t->hr++;

        if (t->hr >= 24)
        {
            t->hr = 0;
        }
    }
}

int main()
{
    Time t;

    initTime(&t);

    printf("Initial Time: ");
    displayTime(t);

    acceptTime(&t);

    printf("Entered Time: ");
    displayTime(t);

    incrementTimeBy1Min(&t);

    printf("After Incrementing 1 Minute: ");
    displayTime(t);

    return 0;
}
