# Parallel-Programming-Lab
This repository was made mainly for Parallel programming lab, it will cover some topics in MPI and openMP libraries.

# Installing MPI on mac os
1. You'll need to install this package 
https://www.open-mpi.org/software/ompi/v2.0/downloads/openmpi-2.0.2.tar.gz
2. put this file somewhere inside your $HOME and untar it
   $ tar xf openmpi-2.0.2.tar
   $ cd openmpi-2.0.2/
3. Make sure you have XCode and command line tools installed
   $ ./configure --prefix=$HOME/opt/usr/local
   $ make all
   $ make install

4. After installation is done, you can verify it
   $ $HOME/opt/usr/local/bin/mpirun --version
        -> mpirun (Open MPI) 2.0.2

5. You can compile and run using 
   $HOME/opt/usr/local/bin/mpicc -o fileName ./fileName.c
   $HOME/opt/usr/local/bin/mpirun -np 2 ./fileName
   
   
 #MPI 
 ......
 
 
 #openMP
