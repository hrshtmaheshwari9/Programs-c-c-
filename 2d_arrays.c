#include<stdio.h>
#include<string.h>

int main()
{

	int arr[6][6];
	int i,j,k=0;
	int sum;
	int maxsum=-36985247;
	int x=0;
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++)
			{
				scanf("%d",&arr[i][j]);
			}
	}
for(i=0;i<4;i++){
	for(j=0;j<6;j++){
		if(j+2<6 && i+2<6){
		
		sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
		
		if(sum>maxsum)
			maxsum=sum;
		}
	}
}


printf("%d",maxsum);
	
}





