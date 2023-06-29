#include <stdio.h>

void jack_bauer(void) {
    int hour, minute;

    for (hour = 0; hour < 24; hour++) {
        for (minute = 0; minute < 60; minute++) {
            int hour_tens = hour / 10;
            int hour_ones = hour % 10;
            int minute_tens = minute / 10;
            int minute_ones = minute % 10;

            printf("%d%d:%d%d\n", hour_tens, hour_ones, minute_tens, minute_ones);
        }
    }
}

int main(void) {
    jack_bauer();
    return 0;
}

