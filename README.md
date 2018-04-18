# Parallel-Programming-Lab
This repository was mainly made for Parallel programming lab, it will cover some topics in MPI and openMP libraries.

# MPI 

## Installing MPI on macOS

1. You'll need to install this [package](https://www.open-mpi.org/software/ompi/v2.0/downloads/openmpi-2.0.2.tar.gz) 

2. Put this file somewhere inside your $HOME and untar it
```
   $ tar xf openmpi-2.0.2.tar
   $ cd openmpi-2.0.2/ 
   ```
3. Make sure you have XCode and command line tools installed
```
   $ ./configure --prefix=$HOME/opt/usr/local
   $ make all
   $ make install
```

4. After installation is done, you can verify it
```
   $ $HOME/opt/usr/local/bin/mpirun --version
        -> mpirun (Open MPI) 2.0.2
```

5. You can compile and run your .c using 
```
   $HOME/opt/usr/local/bin/mpicc -o fileName ./fileName.c
   $HOME/opt/usr/local/bin/mpirun -np 2 ./fileName
```  
   
   
 
 
# openMP

## Installing OpenMP on macOS

openMP is a part of the compiler, so we can use Homebrew to install GNU Compiler Collection (GCC) with openMP support with one command
```
$ brew install gcc --without-multilib
```

and then you can run your .c program for example (helloWorldOMP.c) with this command 
```
gcc-7 -fopenmp -o helloWorldOMP helloWorldOMP.c
./helloWorldOMP
```
I used gcc-7 because it's the gcc version I have on my device, you can check your version using:
```
ls /usr/local/bin/gcc*
```
