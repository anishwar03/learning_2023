#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
} LogEntry;

void readDataFromFile(LogEntry **logData, int *numEntries) {
    FILE *file = fopen("data.csv", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char line[100];
    char *token;

   
    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file) != NULL) {
        *logData = realloc(*logData, (*numEntries + 1) * sizeof(LogEntry));

        token = strtok(line, ",");
        (*logData)[*numEntries].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy((*logData)[*numEntries].sensorNo, token);

        token = strtok(NULL, ",");
        (*logData)[*numEntries].temperature = atof(token);

        token = strtok(NULL, ",");
        (*logData)[*numEntries].humidity = atoi(token);

        token = strtok(NULL, ",");
        (*logData)[*numEntries].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy((*logData)[*numEntries].timestamp, token);

        (*numEntries)++;
    }

    fclose(file);
}

void displayLogData(LogEntry *logData, int numEntries) {
    printf("EntryNo  SensorNo  Temperature  Humidity  Light  Timestamp\n");

    for (int i = 0; i < numEntries; i++) {
        printf("%-8d %-9s %-12.1f %-9d %-6d %s\n", logData[i].entryNo, logData[i].sensorNo, logData[i].temperature,
               logData[i].humidity, logData[i].light, logData[i].timestamp);
    }
}

int main() {
    LogEntry *logData = NULL;
    int numEntries = 0;

    readDataFromFile(&logData, &numEntries);
    displayLogData(logData, numEntries);

    free(logData);

    return 0;
}
