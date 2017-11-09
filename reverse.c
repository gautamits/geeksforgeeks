
#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("enter the length of array\n");
	scanf("%d",&n);
	printf("%d\n",n);
	char a[n];
	int i=0;
	for ( i=0; i<n;i++){
		scanf("%c",&a[i]);
	}
	for ( i=0; i<n;i++){
		printf("%c",a[i]);
	}
	printf("\n");
	for(i=0;i<n/2;i++){
		char temp=a[i];
		a[i]=a[n-(i)];
		a[n-(i)]=temp;
	}
	for ( i=0; i<n;i++){
		printf("%d character is %c\n",i,a[i]);
	}
}

