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
	
int main()
{
	int x = tim_so_nguyen_to(11);
	
	printf(" %d ",x);
	
	return 0;
	
}	
