#include<stdio.h>

int main(){
    int i, days, first;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    switch(days){
        case 31: case 30: case 28: case 29:
            printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
            scanf("%d", &first);
            switch(first){
                case 1: case 2: case 3: case 4: case 5: case 6: case 7:
                    for (i=1; i<first; i++){
                        printf("   ");
                    }
                    for(i=1; i<=days; i++){
                        printf("%3d", i);
                        if((i+first-1) % 7==0){
                            printf("\n");
                        }
                    }
                    break;
                default: printf("Invalid date"); break;
                }

            break;

        default: printf("Invalid date"); break;
    }

    return 0;
}

