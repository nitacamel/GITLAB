#include <stdio.h>
long Factorial(int n)
{
    int Sum;
     if(n == 0)
     {
          printf("0! is base case return answer of 0! = 1 \n");
          return 1;
     }
     else
     {
          printf("%d! is recursive case, Answer = %d * recursion of %d!\n", n, n, n-1);
          printf("Recursion to calculate %d!\n", n-1);
          Sum = n*Factorial(n-1);
          printf("Calculate %d! complete.\n", n-1);
          printf("Return answer from %d! = %d to calculate %d! = [%d * %d!] = %d * %d = %d\n", n-1, Sum/n, n, n, n-1, n, Sum/n, Sum);
          return Sum;
     }
}
void main()
{
    int n;
    char answer[50];
    char ch;
    printf("My Recursion Programs.");
    printf("\nProgram calculate n! by recursion(n<=15)");
    do
    {
        printf("\nENTER n = ");
        scanf("%d",&n);
        scanf("%c",&ch);
        while(ch!='\n'||n<0||n>15)
        {
            printf("Input error, please enter number between 0-15");
            printf("\nENTER n = ");
            rewind(stdin);
            scanf("%d",&n);
            scanf("%c",&ch);
        }
        printf("Complete calculation %d! , answer = %d\n", n, Factorial(n));
        printf("press [y] to continue, others to exit. ");
        scanf("%s",&answer);
    }while(strcmp(answer,"y")==0);
    printf("End Program.");
    printf("\nProgram writen by 57070501062 Nichanat Poonsawat");
}
