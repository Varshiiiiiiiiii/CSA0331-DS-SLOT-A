#include<stdio.h>
int my_fibonacci(int n){

	static int n1=0,n2=1,n3;
	if(n>0){
		n3=n1+n2;
		n1=n2;
	n2=n3;
		printf("%d\t",n3);
		my_fibonacci(n-1);
	}
}
int main(){
	int n;
	printf("Number of elements:");
	scanf("%d",&n);
	printf("Fibonacci series:\n");
	printf("%d\t %d\t",0,1);
	my_fibonacci(n-2);
	return 0;
	
}
