#include <stdio.h>

int main()
{
int i, n, k, soma;
char fat[24];

gets(fat);

if(fat[1] == ' ') {
    n = fat[0] - '0';
    i = 2;

}
 else {
    n = 10;
    i = 3;
}

k = i;

while(fat[i]) {
    i++;
}

k = i - k;
soma = 1;

for(i = n; i > 0; i -= k) {
    soma *= i;
}

printf("%d", soma);

}
