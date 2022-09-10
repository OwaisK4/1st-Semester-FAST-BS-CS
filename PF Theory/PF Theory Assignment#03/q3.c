#include<stdio.h>
#include<math.h>

int main(){
    int x,i,n=14,fact=1;
    float sum=1;

    printf("Enter the value of x in Taylor series: ");
    scanf("%d",&x);

    for(i=1;i<n;i++){
        fact = fact*i;
        sum += (pow(x,i)/fact);
    }

    printf("The sum of the Taylor series is: %f\n",sum);
    return 0;
}
