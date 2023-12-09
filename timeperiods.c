#include <stdio.h>

// Function to calculate time difference
void calculateTimeDifference(int startHr, int startMin, int startSec, int endHr, int endMin, int endSec) {
    int totalStartTime = startHr * 3600 + startMin * 60 + startSec;
    int totalEndTime = endHr * 3600 + endMin * 60 + endSec;

    int timeDifference = totalEndTime - totalStartTime;

    int hours = timeDifference / 3600;
    int minutes = (timeDifference % 3600) / 60;
    int seconds = timeDifference % 60;

    printf("Time Difference: %d:%02d:%02d\n", hours, minutes, seconds);
}

int main() {
    int startHr, startMin, startSec, endHr, endMin, endSec;

    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startHr, &startMin, &startSec);

    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endHr, &endMin, &endSec);

    calculateTimeDifference(startHr, startMin, startSec, endHr, endMin, endSec);

    return 0;
}
