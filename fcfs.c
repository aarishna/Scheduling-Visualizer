#include <stdio.h>
#define max 10


void fcfs(int bt[], int n){
    int waiting_time=0;
    int turnaround_time=0;
    int total=0;
    
    printf("\nProcess No.\tWaiting Time\tTurnaround Time\n");
    
    for (int i = 0; i < n; i++)
    {
        total += bt[i];
        
        printf("%d\t\t%d\t\t%d\n", (i + 1), (total - bt[i]), total);
        
        waiting_time += (total - bt[i]);
        turnaround_time += total;
    }
    printf("\n");
    

}
int main(){

    int bt[max], n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    printf("Enter the burst times of each process:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the burst time of process %d: ", i+1);
        scanf("%d", &bt[i]);
        
    }
    
    fcfs(bt, n);


}