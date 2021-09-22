//  3. Program to Calculate Difference Between Two Time Periods

#include <stdio.h>
struct Time
{
  int seconds;
  int minutes;
  int hours;
};
void differenceBetweentwoTimePeriod(struct Time t1, struct Time t2, struct Time *diff);
 
int main()
{
    struct Time startTime, stopTime, diff;
 
    printf("Please enter start time in \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
 
    printf("Please enter stop time in \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);
 
    // Calculateing the difference
    differenceBetweentwoTimePeriod(startTime, stopTime, &diff);
 
    printf("\nTIME DIFFERENCE: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
 
    return 0;
}
 
void differenceBetweentwoTimePeriod(struct Time start, struct Time stop, struct Time *diff)
{
    if(stop.seconds > start.seconds){
        --start.minutes;
        start.seconds += 60;
    }
 
    diff->seconds = start.seconds - stop.seconds;
    if(stop.minutes > start.minutes){
        --start.hours;
        start.minutes += 60;
    }
 
    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}
 