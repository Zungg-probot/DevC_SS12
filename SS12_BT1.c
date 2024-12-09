#include<stdio.h>
int tinhTong(int a, int b){
	printf("Tong cua hai so %d va %d la: %d\n",a,b,a+b);
	return a+b;
}
int main(){
	printf("hoc ve Function\n");
	tinhTong(5,6);
	return 0;
}
