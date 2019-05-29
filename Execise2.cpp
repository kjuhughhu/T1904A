#include <stdio.h>

	
	int tim_so_nguyen_to(int x)
	{
		int S=0;
		for(int i=1;i<=x;i++)
		{
			
			if(x%i==0){
				S++;
			}
		
		}if(S==2){
			return 1;
		}else{
			return 0;
		}
	}
	
int main(){
	int n,m,i,j;
	printf("Nhap n tu ban phim \n");
	scanf("%d",&n);
	printf("Nhap m tu ban phim \n");
	scanf("%d",&m);
	for(i=n+1;i<m;i++)
	{
		j=tim_so_nguyen_to(i);
		if(j==1){
			printf(" %d ",i);
		}
	}
	
	return 0;
}
