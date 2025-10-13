#include<stdio.h>

int main(){
    int n;
    int wt[20] , tat[20] , bt[20];

    printf("Enter number of processes\n");
    scanf("%d" , &n);

    for(int i = 0; i<n ; i++){
        printf("Enter Brust Time for process %d\n" , i+1);
        scanf("%d" , &bt[i]);
    }

    //Assuming all processes arrive at time 0, and are put in the ready queue in the order of
    //their process IDs

    tat[0] = bt[0];
    for(int i = 1; i<n ; i++){
        tat[i] = tat[i-1] + bt[i];
    }

    for(int i = 0; i<n; i++){
        wt[i] = tat[i] - bt[i];
    }

    float avg_tat = 0.0 , avg_wt = 0.0;

    
    printf("Process ID\tBrust Time\tTAT\tWT\n");
    for(int i = 0; i<n; i++){
        printf("Process%d\t%d\t%d\t%d\n" , i+1 , bt[i] , tat[i] , wt[i]);
        avg_tat += tat[i];
        avg_wt += wt[i];
    }
    printf("\n");

    printf("Average TAT = %f\n" , avg_tat/n);
    printf("Average WT = %f\n" , avg_wt/n);

}