#include <stdio.h>
long factorial(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n * factorial(n-1);
}
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Factorial = %ld", factorial(num));
    return 0;
}
