#include <stdio.h>
#include <string.h>

void nTop(int num){
	int str[5];
	switch(num){
		case 0:
			strcpy(str,"ling");
			break;
		case 1:
			strcpy(str,"yi");
			break;
		case 2:
			strcpy(str,"er");
			break;
		case 3:
			strcpy(str,"san");
			break;
		case 4:
			strcpy(str,"si");
			break;
		case 5:
			strcpy(str,"wu");
			break;
		case 6:
			strcpy(str,"liu");
			break;

	}
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
