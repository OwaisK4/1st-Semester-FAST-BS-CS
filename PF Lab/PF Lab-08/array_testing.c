// using macro
#define size 5
#include <stdio.h>
int main(void)
{
int i;
/*
int arrOfNumbers[5];
arrOfNumbers[0] = 10;
arrOfNumbers[1] = 20;
arrOfNumbers[2] = 30;
arrOfNumbers[3] = 40;
arrOfNumbers[4] = 50;*/
// 2nd alternattive
//int arrOfNumbers[5] = {10,20,30,40,50};
// 3rd alternative declaration
//int arrOfNumbers[] = {10,20,30,40,50};
// 4th alternative using macro
int arrOfNumbers[size] = {10,20,30,40,50};
for(i = 0; i < 5; i++)
{
/* The braces are not necessary; we use them to make the code
clearer. */
if(arrOfNumbers[i] > 20)
printf("%d\n", arrOfNumbers[i]);
}
return 0;
}