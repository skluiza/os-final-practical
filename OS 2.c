
#include <stdio.h>
#define MAX 100

int main()
{
    int AT[MAX],BT[MAX],CT[MAX],TAT[MAX],WT[MAX],avgTAT=0,avgWT=0,i,n;
    printf("Enter the number of processes:");
    scanf("%d",&n);
    printf("Enter the arrival time and burst time:\n");
    for(i=0;i<n;i++)
    scanf("%d %d",&AT[i],&BT[i]);

    CT[0]=BT[0];
    for(i=1;i<n;i++)
    CT[i]=CT[i-1]+BT[i];
    for(i=0;i<n;i++)
    {
        TAT[i]=CT[i]-AT[i];
        WT[i]=TAT[i]-BT[i];
        avgTAT += TAT[i];
        avgWT += WT[i];
    }
    printf("\nProcesses AT BT CT TAT WT\n");
    for(i=0;i<n;i++)
    printf("p[%d],%d\t,%d\t,%d\t,%d\t,%d\n",i+1,AT[i],BT[i],CT[i],TAT[i],WT[i]);
    printf("\nAverage TAT=%d\n",avgTAT/n);
    printf("\nAverage WT=%d\n",avgWT/n);
    return 0;
}

#include <stdio.h>
#define MAX 100
int main()
{
    int AT[MAX],BT[MAX],CT[MAX],TAT[MAX],WT[MAX],avgTAT =0,avgWT =0,i,n;
    printf("Enter number of processes:");
    scanf("%d",&n);

    printf("Enter arrival time and burst time:\n");
    for(i=0;i<n;i++)
    scanf("%d %d",&AT[i],&BT[i]);

    CT[0]=BT[0];
    for(i=1;i<n;i++)
    CT[i]=CT[i-1]+BT[i];
    for(i=0;i<n;i++)
    {
        TAT[i]=CT[i]-AT[i];
        WT[i]=TAT[i]-BT[i];
        avgWT +=WT[i];
        avgTAT +=TAT[i];
    }
    printf("\nProcesses AT BT CT TAT WT\n");
    for(i=0;i<n;i++)
    scanf("p[%d],%d\t,%d\t,%d\t,%d\t,%d\n",i+1,AT[i],BT[i],CT[i],TAT[i],WT[i]);
    printf("Avreage TAT=%d\n",avgTAT/n);
        printf("Avreage WT=%d\n",avgWT/n);
        return 0;

}

#include <stdio.h>
#define MAX 100
int main()
{
    int AT[MAX],BT[MAX],CT[MAX],TAT[MAX],WT[MAX],avgTAT=0,avgWT=0,i,n;
    printf("Enter the processes:\n");
    scanf("%d",&n);

    printf("Enter the arrival time and burst time:\n");
    for(i=0;i<n;i++)
    scanf("%d %d",&AT[i],BT[i]);

    CT[0]=BT[0];
    for(i=1;i<n;i++)
    CT[i]=CT[i-1]+BT[i];

    for(i=0;i<n;i++)
    {
        TAT[i]=CT[i]-AT[i];
        WT[i]=TAT[i]-BT[i];
        avgWT+=WT[i];
        avgTAT +=TAT[i];
    }
    printf("Processes AT BT CT TAT WT\n");
    for(i=0;i<n;i++)
    scanf("p[%d],%d\t,%d\t,%d\t,%d\t,%d\n",i+1,AT[i],BT[i],CT[i],TAT[i],WT[i]);
    printf("Average TAT is %d",avgTAT /n);
    printf("Avearge WT is %d",avgWT / n);
    return 0;
}

*/

#include<stdio.h>
#define MAX 100

int main(){
    int AT[MAX], BT[MAX], CT[MAX], TAT[MAX], WT[MAX], avgTAT = 0, avgWT = 0, i, n;

    printf("Enter Number of Processes: ");
    scanf("%d", &n);

    printf("Enter Arrival Time and Burst Time:\n");
    for(i = 0; i < n; i++)
        scanf("%d %d", &AT[i], &BT[i]);

    CT[0] = BT[0];
    for(i = 1; i < n; i++)
        CT[i] = CT[i - 1] + BT[i];

    for(i = 0; i < n; i++){
        TAT[i] = CT[i] - AT[i];
        WT[i] = TAT[i] - BT[i];
        avgWT += WT[i];
        avgTAT += TAT[i];
    }

    printf("\nProcess  AT  BT  CT  TAT  WT\n");
    for(i = 0; i < n; i++)
        printf("P[%d]\t%d\t%d\t%d\t%d\t%d\n", i + 1, AT[i], BT[i], CT[i], TAT[i], WT[i]);

    printf("\nAverage TAT: %d\n", avgTAT / n);
    printf("Average WT: %d\n", avgWT / n);

    return 0;
}
