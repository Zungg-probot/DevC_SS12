#include <stdio.h>
int soHoanHao(int n){
    if (n <= 0){
    	return 0;
	}
    int sum = 0;
    for(int i = 1;i < n; i++){
        if (n % i == 0){
        sum += i;
        }
    }
    if(sum == n){
    	return n;
	}
    return 0;
}
int main(){
    int num1,num2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    if(soHoanHao(num1)){
        printf("%d la so hoan hao\n", num1);
    }else{
        printf("%d khong phai so hoan hao\n", num1);
    }
    if(soHoanHao(num2)){
        printf("%d la so hoan hao\n", num2);
    }else{
        printf("%d khong phai so hoan hao\n", num2);
    }
    return 0;
}
