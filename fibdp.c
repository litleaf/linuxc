#include <stdio.h>

long int fibarray[200000000]={0};

long int fib(long int n)
{
    if(n>1 && fibarray[n]!=0) return fibarray[n];

    if (n<=1)
	return n;
    else
    {
	fibarray[n] = fib(n-1)+fib(n-2);
        return fibarray[n];
    }
}

int main(int argc,char *argv[])
{
    if(argc<2) 
    {
	printf("Please input the number of fib \nEX: ./fib 10\n");
	exit(0);
    }

    long int inputnum = atol(argv[1]);
    printf("your input is %ld\n",inputnum);
    printf("The fib() is %ld\n",fib(inputnum));
}
