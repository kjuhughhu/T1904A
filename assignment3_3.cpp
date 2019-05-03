#include <stdio.h>

int main(){
	int n,x=0;
	printf("nhap so ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			x++;
		}
	}
	if(x==2){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong la so nguyen to",n);
	}
}
