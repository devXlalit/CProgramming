#include <stdio.h>
void main(){
    int fact = 1;
    int n = 5;
    int i = 1;
    while (i<=n)
    {
        fact*=i;
        // fact = i*fact;
        i++;
    }
    printf("%d",fact);
}