#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void nTop(int num){
	char str[5];

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
		case 7:
			strcpy(str,"qi");
			break;
		case 8:
			strcpy(str,"ba");
			break;
		case 9:
			strcpy(str,"jiu");
			break;
	}

	printf("%s", str);
	fflush(stdout);
}

void printNum(int num){
	int val = num%10;
	if( num != 0 ){
		printNum(num/10);
		if(num/10 != 0){
			putchar(' ');
		}
		nTop(val);
	}
}


void fun(int *numArr, int n){
	int sum = 0;

	int i;
	for( i = 0 ; i < n ; i++ ){
		sum += numArr[i];
	}

	if( sum != 0 ){
		printNum(sum);
	}else{
		nTop(sum);
	}
}

int main(void){
	int num[100];
	int i = 0;
	char c;
	while( (c=getchar()) != '\n' ){
		num[i] = atoi(&c);
		i++;
	}
	
	fun(num,i);

	return 0;
}
