#include <stdio.h>
#include <stdlib.h>
 
// C program to generate  fibonacci series by using recursion 
//www.instanceofjava.com
 
//Function declaration
long long Printfibonacci(int num);
 
 
int main()
{
    int num;
    long long fibonacci;
     
    //Reads number from user to find nth fibonacci term
    printf("Enter any number to generaye fibonacci series up to ");
    scanf("%d", &num);
     
    printf("%d %d ",0,1);  
    Printfibonacci(num-2);//n-2 numbers. i.e 1 and 2 are printed already
     
   
}
 
 
/**
 
 * Recursive function  
*/
long long Printfibonacci(int num) 
{
    static int n1=0,n2=1,n3;  
    if(num>0){  
         n3 = n1 + n2;  
         n1 = n2;  
         n2 = n3;  
         printf("%d ",n3);  
         Printfibonacci(num-1); //Recursively calls Printfibonacci()
    }   
}
