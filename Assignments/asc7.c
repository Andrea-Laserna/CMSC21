#include<stdio.h>
#include<stdbool.h>
#define SIZE 8

int main(){
    bool road_networks[SIZE][SIZE]={
        {1,1,0,0,0,1,0,0},
        {1,1,1,0,0,0,0,0},
        {0,1,1,0,1,1,0,0},
        {0,0,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0},
        {1,0,1,0,0,1,0,0},
        {1,0,0,1,0,0,1,0}, 
        {0,0,0,0,0,1,0,1}
    };

    //column
    char column[8]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    for (int i=0; i<SIZE; i++){
        if (i==2||i==3){
            printf("   [%c]", column[i]);
        }
        else{
            printf("%6c", column[i]);
        }
    }
        printf("\n");

    //row
    char rowtitle[8]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    //matrix
    for (int row=0; row<SIZE; row++){
        if (row==2||row==3){
            printf("[%c]  ", row[rowtitle]);
        } 
        else{
            printf("%c    ", row[rowtitle]);
        }
        for (int column=0; column<SIZE; column++){
            printf ("%d     ", road_networks[row][column]);
        }
        printf("\n");
    }

    int point; 
    printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H: ");
    scanf("%d", &point);

    switch(point){
        case 0: printf("At point: A\npoint: C arrived to charging station"); break;
        case 1: printf("At point: B\npoint: C arrived to charging station"); break;
        case 5: printf("At point: F\npoint: C arrived to charging station"); break;

        case 4: printf("At point: E\npoint: D arrived to charging station"); break;
        case 6: printf("At point: G\npoint: D arrived to charging station"); break;
        case 7: printf("At point: H\npoint: D arrived to charging station"); break;

        case 2: printf("C is a charging station"); break;
        case 3: printf("D is a charging station"); break;

        default: printf("Invalid input"); break;
    }

return 0;   
}

