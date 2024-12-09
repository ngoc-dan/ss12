#include<stdio.h>
int display();
int main(){
	int n;
	int gt=1;
    gt = display();
	printf("giai thua cua so la : %d",gt);
	return 0;
}
int display(){ 
    int n;
    int gt=1;
    printf("nhap so can tim : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		gt*=i;
	}
	return gt;
}
