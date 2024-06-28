#include <stdio.h>
void main(){
    int n = 0;
    printf("Enter a value: ");
    scanf("%d",&n);
    int n1 = 0;
    int n2 = 1;

    printf("Fibonacci series of given number is:\n");
    printf("%d ",n1);
    printf("%d ",n2);
    while (n2<n){
        int n3 = n1+n2;
        
        printf("%d ",n3);
        n1 = n2;
        n2 = n3; 
    }
    
}