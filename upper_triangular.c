#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of eqn's\n");
	scanf("%d",&n);
	float arr[n][n+1];
	
	for(int i=0 ; i<n ; i++)
	{
		printf("\n Enter the coff's of eqn %d \n",i+1);
		for(int j=0;j<n+1;j++){
			scanf("%f",&arr[i][j]);
			while(arr[0][0]==0){
				printf("please enter a non-zero value\n");
				scanf("%f",&arr[0][0]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int k=i+1;k<n;k++){
			float a=arr[i][i];
			float b=arr[k][i];
			for(int j=0;j<n+1;j++){
				arr[k][j]=arr[k][j]-(b/a)*arr[i][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%f  ",arr[i][j]);
		}
		printf("\n");
	}
}
