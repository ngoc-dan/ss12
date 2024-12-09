#include<stdio.h>
int display(int n){
	int sum=0;
		for(int j=1;j<n;j++){
			if(n%j==0){
			   sum+=j;		
	    }   
    }
    return sum==n;
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

