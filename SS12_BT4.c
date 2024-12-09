#include <stdio.h>

void timMax(int array[],int size){
	int max=0;
    for (int i = 0;i<size;i++){
        if(array[i]>max){
        	max=array[i];
		}
    }
    printf("Phan tu lon nhat trong mang: %d",max);
}
int main(){
    int array[] = {1,8,3,7,5};
    int size = sizeof(array) / sizeof(array[0]);
    timMax(array, size);
    return 0;
}
