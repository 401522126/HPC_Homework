#include<stdio.h>
#include"mpi.h"

int main(int argc,char *argv[]){
	int id,numprocs,i,i2;
	MPI_Init(&argc,&argv);
	MPI_Comm_rank(MPI_COMM_WORLD,&id);
	MPI_Comm_size(MPI_COMM_WORLD,&numprocs);
	for(i=1;i<=10000;i++){
	i2=i*i;
	printf("Hello,world!\n");
	printf("the number is %d\n",i2);
	printf("this is %d of %d\n",id,numprocs);
	}
	MPI_Finalize();
	
}
