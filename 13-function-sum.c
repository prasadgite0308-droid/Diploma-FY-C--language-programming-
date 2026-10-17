#include <stdio.h>
// Function declaration
int add(int a, int b){
    return a + b;
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Sum = %d", add(x, y));
    return 0;
}
