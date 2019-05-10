#include <stdio.h>

int main(){
	
	int a[10];
	double trungbinh=0;
	int tong=0;
	for(int i=0;i<10;i++){
		printf("nhap so");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		
		tong = tong + a[i];
		trungbinh = tong / 10;

		
	} 			printf("gia tri trung binh la %lf",trungbinh);

}
