#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void start_timer() {
    int hour, min, sec;
    hour = min = sec = 0;

    while (1) {
        system("clear");
        printf("\r %02d : %02d : %02d", hour, min, sec);
        fflush(stdout);

        sleep(1);
        sec++;

        if (sec == 60) {
            min++;
            sec = 0;
        }

        if (min == 60) {
            hour++;
            min = 0;
        }

        if (hour == 24) {
            hour = min = sec=0;
        }
    }
}
