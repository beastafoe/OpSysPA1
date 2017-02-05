#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char *name = NULL;
  int arrival = 0;
  int burst = 0;
} process;

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
