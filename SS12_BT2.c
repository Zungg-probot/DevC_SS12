#include <stdio.h>

void inphantu(int array[],int size){
    for (int i = 0;i<size;i++){
        printf("%d ", array[i]);
    }
}

int main(){
    int array[] = {1,8,3,7,5};
    int size = sizeof(array) / sizeof(array[0]);
    inphantu(array, size);
    return 0;
}
