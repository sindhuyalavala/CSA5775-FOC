 #include<stdio.h>
int main()
{
int number,sum=0;
printf("\n please enter any positive integer\n");
scanf("%d",&number);
sum=(number*(number+1)*(2*number+1))/6;
printf("\n the sum of series for %d = %d",number,sum);
}

