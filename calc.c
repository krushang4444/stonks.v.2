#include<stdio.h>
float diff(int a, int b){
    return a-b;
}

void main()
{
    float a,b;
    printf("Enter the numbers pesent ");
    scanf("%f %f",&a,&b);
    printf("the answer is 8; just  messing with ya.... its %f \n",a+b);
    float c=diff(a,b);
    printf("the diff is 8; just  messing with ya.... its %f \n",c);
}
    
    
