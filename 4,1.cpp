#include <stdio.h>

int main(){
	
	int a;
	printf("nhap so");
	scanf("%d",&a);
	int x=0;
	
	for(int i=1;i<=a/2;i++){
		if(a%i==0){
			x+=i;
		}
	}
	if(x == a){
		printf(" %d la so hoan hao",a);
	}else{
		printf(" %d khong la so hoan hao",a);
	}
}
