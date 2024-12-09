#include <stdio.h>
int giaiThua(int n){
    int ketqua = 1;
    for (int i = 1; i <= n; i++){
        ketqua *= i;
    }
    return ketqua;
}
int main(){
    int num;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &num);
    printf("Giai thua cua doi so la: %d\n",giaiThua(num));
    return 0;
}
