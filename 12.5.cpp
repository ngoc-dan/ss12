#include<stdio.h>
int display(int n){
	int sum=0;
		for(int j=2;j<n;j++){
			if(n%j==0){
			  return false;		
	    }   
    }
    return true;
}
int main(){
	int a,b;
	printf("Nhap so thu nhat : ");
    scanf("%d", &a);
    printf("Nhap so thu hai : ");
    scanf("%d", &b);
		if(display(a)){
			printf("true\n");
		}else{
			printf("fales\n");
	    }
	    if(display(b)){
			printf("true\n");
		}else{
			printf("fales\n");
	    }
	return 0;	
}
