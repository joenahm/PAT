#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME 0
#define ID 1
#define GRADE 2 

typedef struct{
	char name[11];
	char id[11];
	int grade;
} info;

void infoCpy(info *target, info *source){
	strcpy(target->name,source->name);
	strcpy(target->id,source->id);
	target->grade = source->grade;
}

void infoPrint(info *stuInfo){
	printf("%s", stuInfo->name);
	putchar(' ');
	printf("%s", stuInfo->id);
}

void fun(){
	info stuInfo,top,bottom;
	top.grade = 0;
	bottom.grade = 100;

	int amt;
	scanf("%d", &amt);
	getchar();

	int j;
	for( j = 0 ; j < amt ; j++ ){
		char temp[4];
		int type = NAME;

		int i = 0;
		char c;
		while( (c=getchar()) != '\n' ){
			if( c == ' ' ){
				if( type == NAME ){
					stuInfo.name[i] = '\0';
					type = ID;
				}else{
					stuInfo.id[i] = '\0';
					type = GRADE;
				}
	
				i = 0;
			}else{
				switch( type ){
					case NAME:
						stuInfo.name[i] = c;
						break;
					case ID:
						stuInfo.id[i] = c;
						break;
					case GRADE:
						temp[i] = c;
						break;
				}
				i++;
			}
		}
		temp[i] = '\0';
		stuInfo.grade = atoi(temp);

		if( stuInfo.grade > top.grade ){
			infoCpy(&top,&stuInfo);			
		}
		
		if(stuInfo.grade < bottom.grade ){
			infoCpy(&bottom,&stuInfo);
		}
	}

	infoPrint(&top);
	putchar('\n');
	infoPrint(&bottom);
}

int main(void){
	fun();

	return 0;
}
