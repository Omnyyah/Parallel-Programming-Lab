#include <stdio.h>
#include <string.h>
#include <mpi.h>
#include <time.h>

const int MAX_STRING=100;

int main (void)
{
    int my_rank,comm_sz;
    
    char greeting[MAX_STRING];
    MPI_Init(NULL,NULL);
    MPI_Comm_rank(MPI_COMM_WORLD,&my_rank);
    MPI_Comm_size(MPI_COMM_WORLD,&comm_sz);

    if(my_rank!=0)
    {
        sprintf(greeting, "Hello world from processes %d of %d !\n", my_rank,comm_sz);
        MPI_Send(greeting,strlen(greeting)+1 ,MPI_CHAR,0,0,MPI_COMM_WORLD);
    }
    else
    {
        printf("Hello Amazing world from processes %d of %d !\n", my_rank,comm_sz);
        for(int i=1;i<comm_sz;i++)
        {
            MPI_Recv(greeting,MAX_STRING,MPI_CHAR,i,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
            printf("%s\n",greeting);
        }

    }

    MPI_Finalize();

    return 0;
}