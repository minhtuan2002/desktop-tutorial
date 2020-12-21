#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);

	printf("Nhap b=");
	scanf("%d",&b);

	printf("Nhap c=");
	scanf("%d",&c);
    if(!(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)){
    	printf("khong phai la tam giac");
    	
	}else{
		int t = a+b+c;
		float p = (float)t/2;
		float s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("chu vi tam giac %d:\n ",t);
		printf("dien tich tam giac %f:\n ",s);
		
		
	}
	}



