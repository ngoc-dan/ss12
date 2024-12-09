#include<stdio.h>
int tong();
int main(){
	int a,b;
	int sum;
    sum=tong();
	printf("tong cua hai so la : %d",sum);
	return 0;
}
int tong(){ 
    int a,b;
    int sum;
    printf("nhap so thu nhat : ");
	scanf("%d",&a);
	printf("nhap so thu hai : ");
	scanf("%d",&b);
	sum=a+b;
	return sum;
}

