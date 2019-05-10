#include <stdio.h>

int main(){
	
	int n,x,c;
	int a[n];
	
	printf("nhap n");
	scanf("%d",&n);
	
	
	for(int i=0;i<n;i++){
		printf("nhap %d so tu ban phim",n);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int x=i+1;x<n;x++){
			if(a[i]<a[x]){
				c=a[i];
				a[i]=a[x];
				a[x]=c;
			}
		}
	}for(int i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
	
	
}
