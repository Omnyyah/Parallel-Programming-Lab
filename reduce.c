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

    if(my_rank==0)
    {
        // if comm_sz=2 then the summation will be 0+1=1
         printf("The summation of %d processes is %d !\n", comm_sz,sum);
    }
   
    MPI_Finalize();

    return 0;
}