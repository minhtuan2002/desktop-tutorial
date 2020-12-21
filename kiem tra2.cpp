#include <iostream>   
#include <stdio.h>  
void uppercase (char *s){
	while (*s != '\0')
	{
		*s = toupper ( *s);
		s++;
	}
	return;
}
	int main(){
	char s[100],s1[100];
	printf("Nhap chuoi: ");
	scanf("%s",s);
	printf("Nhap chuoi: ");
	scanf("%s",s1);
	uppercase(s);
	uppercase(s1);
	printf("Sau khi bien doi: %s %s",s,s1);
}
