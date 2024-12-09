#include<stdio.h>
int display();
int main(){
	int arr[4]={1,4,6,3};

	display();
	return 0;
}
int display(){
	int arr[4]={1,4,6,3};
	for(int i=0;i<4;i++){
		printf ("%d ",arr[i]);
	}
}
