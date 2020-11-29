#include<stdio.h>
int a=1;
int b=0;
int mypow(int a, int b){
	int sum =1;
	for(int i=0;i<b;i++){
		sum = sum *a;
	}
	return sum;
}
int main(){
	scanf("%d %d",&a,&b);
	printf("answer is:%d\n", mypow(a,b));
	return 0;
}
