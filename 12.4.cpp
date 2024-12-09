#include<stdio.h>
int display();
int main(){
	int arr[4]={1,4,6,3};
    int max;
	max=display();
	printf("so lon nhat trong mang la : %d",max);
	return 0;
}
int display(){
	int max=0;
	int arr[4]={1,4,6,3};
	for(int i=0;i<4;i++){
		if(max<arr[i]){
		max=arr[i];
	}
	}
	return max;
}
