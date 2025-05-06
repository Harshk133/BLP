// C Program to implment FCFS Scheduling Without Arrival Time
#include <stdio.h>
#define max 30

void main() {
    int i, j, n, bt[max], wt[max], tat[max];
    float awt = 0, atat = 0;

    // Clear screen (Optional, platform-specific)
    // system("cls"); // Uncomment this line if you are on Windows
    // system("clear"); // Uncomment this line if you are on Linux/Mac

    printf("Enter the Number of Process:\n");
    scanf("%d", &n);
    printf("Enter the Burst Time of the Process:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &bt[i]);  // Removed the extra '\n'
    }

    printf("Process\t Burst Time\t Waiting Time\t Turnaround Time\n");

    for(i = 0; i < n; i++) {
        wt[0] = 0;
        tat[0] = 0;
        for(j = 0; j < i; j++) {
            wt[i] = wt[i] + bt[j];
        }
        tat[i] = wt[i] + bt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];
        printf("%d\t %d\t\t %d\t\t %d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    awt = awt / n;
    atat = atat / n;
    printf("Average Waiting Time = %f\n", awt);
    printf("Average Turnaround Time = %f\n", atat);

    // getchar(); // Uncomment if you want to wait for user input before exiting
}
