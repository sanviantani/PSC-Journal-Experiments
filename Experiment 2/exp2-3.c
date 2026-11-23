//Experiment-2
/*
DDU'30
B.Tech IT090
Sanvi Antani
*/

#include <stdio.h>
int main()
{
    int totalseconds = 8500;
    int originalseconds = totalseconds;
    int hours, minutes, seconds;
    hours = totalseconds / 3600;
     totalseconds = totalseconds - (3600 * hours);
     minutes = totalseconds / 60;
     totalseconds = totalseconds - (60 * minutes);
     seconds = totalseconds;
     printf("hours=%d, minutes=%d, seconds=%d", hours, minutes, seconds);

    return 0;
}
