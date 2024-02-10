#include <stdio.h>

int factorial(int num)
{
       int i=1,f=1;
               while(i<=num)

              {
                       f=f*i;
                       i++;
              }
return f;

}

int factorialr(int n)
{
          if (n==1)  {  
                return 1;
          }
          else{
                          return n*factorialr(n-1);   }

}
int main()
{
           int n,fact,fact1;
            printf("Enter a positive integer: ");
            scanf("%d", &n);
           fact= factorial(n);
           fact1=factorialr(n);
           printf("Factorial of %d using non recursive is= %d\n",n, fact) ;
            printf("\nFactorial of %d using recursive function is = %d",n, fact1) ; 
          return 0;
}