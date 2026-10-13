#include <stdio.h>
int main() {
    int n, rev=0, rem, original;
    printf("Enter number: ");
    scanf("%d", &n);
    original = n;
    while(n!= 0){
        rem = n % 10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(original == rev)
        printf("%d is Palindrome", original);
    else
        printf("%d is Not Palindrome", original);
    return 0;
}
