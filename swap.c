// HOmwork 

#include <stdio.h>
void main(){
    int a = 12;
    int b = 45;
    printf("Before swapping:");
    printf("%d\n",a);
    printf("%d\n",b);

    // Code
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping:");
    printf("%d\n",a);
    printf("%d\n",b);


}