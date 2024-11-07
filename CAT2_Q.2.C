//an array data structure -is a collection of elements of the same data type stored in contiguous memory location 


#include <stdio.h>


int main(){
    int scores [2][2]={
        {65,92},
        {84,72}
     

};
int score [2][2]={
    {35,70},
    {59,67}
};
for(int i=0;i<2;i++){
    for(int k=0;k<2;k++){
        printf("%d\t",scores[i][k]);
    }
    printf("\n");
    }
     printf("\n");
    for(int i=0;i<2;i++){
    for(int k=0;k<2;k++){
        printf("%d\t",score[i][k]);
    }
    printf("\n");
    }
return 0;
}
