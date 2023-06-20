#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long computeTotalSeconds(char timeStr[]) {
    char* token;
    unsigned long hours, minutes, seconds;
    token = strtok(timeStr, ":");
    hours = strtoul(token, NULL, 10);
    token = strtok(NULL, ":");
    minutes = strtoul(token, NULL, 10);
    token = strtok(NULL, ":");
    seconds = strtoul(token, NULL, 10);


    unsigned long totalSeconds = hours * 3600 + minutes * 60 + seconds;

    return totalSeconds;
}

int main() {
    char timeStr[100] ;
    scanf("%s",timeStr);
    unsigned long totalSeconds = computeTotalSeconds(timeStr);

    printf("Total seconds: %lu\n", totalSeconds);

    return 0;
}
