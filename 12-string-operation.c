#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len=0;
    printf("Enter your name: ");
    gets(str); // or use fgets(str, sizeof(str), stdin);

    // Length without strlen
    for(i=0; str[i]!='\0'; i++){
        len++;
    }
    printf("Length = %d\n", len);
    printf("Reverse = ");
    for(i=len-1; i>=0; i--){
        printf("%c", str[i]);
    }
    return 0;
}
