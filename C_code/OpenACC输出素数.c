#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("prime_number8.txt","w",stdout);
    int i;
    int j;
    int flag = 1;
    int count= 0;
    double start,end,time;

    for(i = 2;i <= 1000000;i++){
    #pragma acc parallel
        for(j = 2;j <= i / 2;j++){
     if(i % j ==0){
         flag = 0;
     break;
                  }
                                 }
     if(flag == 1){
         printf("%d\n",i);
	 count +=1;
                  }
     flag = 1;

    }
    
    fclose(stdout);

    freopen("/dev/tty","w",stdout);//linux下将输出重定向到控制台
    printf ("the number of prime number is %d\n",count);

    return 0;
}
