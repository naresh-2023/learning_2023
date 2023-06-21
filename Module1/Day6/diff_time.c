#include <stdio.h>
struct Time {
    int hrs;
    int min;
    int sec;
};
struct Time Timediff(struct Time t1, struct Time t2) {
    struct Time diff;
    int sec1, sec2, timediff;
    sec1 = t1.hrs * 3600 + t1.min * 60 + t1.sec;
    sec2 = t2.hrs * 3600 + t2.min * 60 + t2.sec;
    timediff = sec2 - sec1;
    if (timediff < 0)
        timediff += 24 * 3600;
    timediff = timediff % 3600;
    diff.min = timediff / 60;
    diff.sec = timediff % 60;
    return diff;
}
int main() {
    struct Time t1, t2, diff;
    printf("Enter time1 (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hrs, &t1.min, &t1.sec);
    printf("Enter time2 (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hrs, &t2.min, &t2.sec);
    diff =Timediff(t1, t2);
    printf("Time difference: %2d:%2d:%2d\n", diff.hrs, diff.min, diff.sec);
    return 0;
}
