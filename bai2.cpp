#include <stdio.h>

int main(){
	int a;
	printf("nhap so a tu ban phim");
	scanf("%d",&a);
	int b;
	printf("nhap so b tu ban phim");
	scanf("%d",&b);
	int c;
	printf("nhap so c tu ban phim");
	scanf("%d",&c);
	if(a>b){
		if(b>c){
			printf("%d la so lon nhat ",a);
			printf("%d la so nho nhat" ,c);
		}else{
			printf("%d la so lon nhat ",a);
			printf("%d la so nho nhat ",b);
		}
    }else{
    	if(b<c){
    		printf("%d la so lon nhat",c);
    		printf("%d la so nho nhat",a);
		}else{
			printf("%d la so lon nhat ",b);
			printf("%d la so nho nhat ",a);
		}
	}
}
