#include<stdio.h>
#include"test.h"
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a=%d, b=%d, a+b=%d\n", a, b, add(a, b));
}

