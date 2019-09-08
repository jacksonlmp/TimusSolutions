#include <stdio.h>

int main(){

int num1, num2;

scanf("%d %d", &num1, &num2);

if(num1 % 2 == 0 || num2 % 2 == 1){
    printf("yes\n");
}
else{
    printf("no\n");
}
}
