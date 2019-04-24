#include <stdio.h>

int main(){
	int a; 
	printf("nhap so a tu ban fim");
	scanf("%d",&a);
	int b;
	printf("nhap so b tu ban fim");
	scanf("%d",&b);
	if(a>b){
		if(b==0){
			printf("khong chia duoc");
		}else{
			int c=a/b;
			printf(" ket qua la %d",a/b);
		}
	}else{
		int c=a*b;
		printf("ket qua la %d",a*b);
	}
}
