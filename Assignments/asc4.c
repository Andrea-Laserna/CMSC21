#include<stdio.h>

int main(void){
    int n, num = 1;
    printf("TABLE OF POWERS OF TWO\n\n");
    printf(" n   2 to the n\n");
    printf("---  ------------\n");

    for (n=0; n<=10; n++){
        // printf("%d", num);
        num*=2;
        printf("\n%-2d   %-2d", n, num);
    }

    return 0;
}
