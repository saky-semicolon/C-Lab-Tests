// Task-2
#include <stdio.h>
int main()
{
    double d1, t1, d2, t2, v1, v2, speed, time, distance;
    
    // Taking input to calculate the speed of the car
    printf("Enter the distance in kilometres travelled along the journey: ");
    scanf("%lf", &d1);
    printf("Enter the time in hour taken to reach the destintaion: ");
    scanf("%lf", &t1);

    // Printing the speed of the car
    speed = d1 / t1;
    printf("The speed of that car: %.2lf kmph\n", speed);

    // Taking input to calculate the required time to reach the destination
    printf("Enter the distance in kilometres travelled along the journey: ");
    scanf("%lf", &d2);
    printf("Enter the speed in kmph along the journey: ");
    scanf("%lf", &v1);

    // Printing the required time to reach the destination
    time = d2 / v1;
    printf("The speed of that car: %.2lf kmph\n", time);

    // Taking input to calculate the distance travelled by the car in a certain time and speed
    printf("Enter the speed in kmph along the journey: ");
    scanf("%lf", &v2);
    printf("Enter the required time in hour to reach the destintaion: ");
    scanf("%lf", &t2);

    // Printing the distance travelled along the journey
    distance = v2 * t2;
    printf("The speed of that car: %.2lf kmph\n", distance);

    return 0;
}