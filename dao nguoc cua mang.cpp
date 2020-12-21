#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap arr[%d]=",i);
		scanf("%d",arr[i]);
		printf("cac so dao nguoc: ");
		for(int i=0;i<n;i++){
			// tim so dao nguoc cua arr[i]
			int x = 0;
			for( ;arr[i]!=0; ){
				x = x*10+ arr[i]%10;
				arr[i]/=10;
				}
				printf("%5",x);
				//ket thuc
				}
				}
				}
