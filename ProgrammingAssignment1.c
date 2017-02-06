#include <stdio.h>
#include <stdlib.h>
typedef struct
{
  char *name = NULL;
  int arrival = 0;
  int burst = 0;
} process;

//First in First Out Function...Sorts array of processes and prints first few lines...
//need to setup while to print output.
void firstInFirstOut(process[] processes, int runfor, int processCount, int quantum){
  int i, k;
  process temp = malloc(sizeof (process));
  for(i = 0; i<processCount-1; i++){
    for(k = i+1; k<processCount; k++){
     if(processes[i].arrival > processes[k].arrival){
       temp = processes[i];
       processes[i] = process[k];
       processes[k] = temp;
     }
    }
  }
  printf("%d processes\n", processCount);
  printf("Using First-Come First-Served\n");
  printf("Quantum %d\n\n", quantum);
}

int main()
{
    FILE *fp;
    int numProc, runTime, quantum;
    char *sch, *token;
    process *allProcs;
    fp = fopen("processes.in", "r");
    if(fp == NULL)
    {
      printf("Invalid file\n");
      exit();
    }
    fscanf(fp, "%s", token);
    fscanf(fp, "%s", token);
    allProcs = malloc((int)token * sizeof(process));
    fscanf(fp, "%s", token);
    while(token != EOF)
    {
      printf('%s', token);
      fscanf(fp, "%s", token);
      if(token == 'processcount')
      {
        fscanf(fp, "%s", token);
      }
    }
}
