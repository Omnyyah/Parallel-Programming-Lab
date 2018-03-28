
#include <stdio.h>
#include <string.h>
#include <mpi.h>

int main (void)
{
    int my_rank,comm_sz,sum;
    MPI_Init(NULL,NULL);
    MPI_Comm_rank(MPI_COMM_WORLD,&my_rank);
    MPI_Comm_size(MPI_COMM_WORLD,&comm_sz);

    // instead of using reduce and the bcast methods, we will use Allreduce which will perform the summation and then brodcast it to all processes 
    MPI_Allreduce(&my_rank,&sum,1,MPI_INT, MPI_SUM,MPI_COMM_WORLD);
    printf("I'm process %d and Sum is %d\n ",my_rank,sum);

    MPI_Finalize();

    return 0;
}