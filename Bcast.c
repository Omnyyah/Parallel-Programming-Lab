#include <stdio.h>
#include <string.h>
#include <mpi.h>

int main (void)
{
    int my_rank,comm_sz,sum;
    MPI_Init(NULL,NULL);
    MPI_Comm_rank(MPI_COMM_WORLD,&my_rank);
    MPI_Comm_size(MPI_COMM_WORLD,&comm_sz);

    MPI_Reduce(&my_rank,&sum,1,MPI_INT, MPI_SUM,0,MPI_COMM_WORLD);

    //Broadcast the sum result to all processes
    MPI_Bcast(&sum,1,MPI_INT,0,MPI_COMM_WORLD);

    printf("I'm process %d and Sum is %d\n ",my_rank,sum);
   
    MPI_Finalize();

    return 0;
}