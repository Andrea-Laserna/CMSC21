#include<stdio.h>
#include<stdbool.h>

#define NUM_PATHWAYS ((int)(sizeof(pathway)/sizeof(pathway[0])))

int main(){
    int value;
    bool pathway[8]={false};
    for (value=0; value<=8; value++){
        if (value==0 || value==2){
            pathway[value]=true;
        }
    }

    for (int i=0; i<NUM_PATHWAYS; i++){
        if (pathway[i]){
            printf("pathway[%d] is open \n", i);
        }
        else{
            printf("pathway[%d] is close\n", i);
        }
    }

    return 0;
}
