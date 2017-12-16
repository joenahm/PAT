#include <stdio.h>

int evenp(int val){
	int status;
	if( val%2 == 0 ){
		status = 1;
	}else{
		status = 0;
	}

	return status;
}

void fun(int val, int *count){
	if( val != 1 ){
		*count += 1;
		if( evenp(val) ){
			fun(val/2,count);
		}else{
			fun((3*val+1)/2,count);
		}
	}
}

int main(void){
	int a,c;
	scanf("%d", &a);

	c = 0;
	fun(a,&c);
	printf("%d\n", c);

	return 0;
}