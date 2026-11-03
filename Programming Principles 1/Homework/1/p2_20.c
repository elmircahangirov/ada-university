#include <stdio.h>

int main(void){
    int totalSeconds;
    int hours, minutes, seconds;
    int remainingSeconds;
    
    // User enters the total time elapsed in seconds
    printf("Enter total time elapsed in seconds: ");
    scanf("%d", &totalSeconds);
    
    hours = totalSeconds / 3600;
    remainingSeconds = totalSeconds % 3600;
    minutes = remainingSeconds / 60;
    seconds = remainingSeconds % 60;
    
    printf("Time elapsed: %d:%d:%d\n", hours, minutes, seconds);
    return 0;
    
}
