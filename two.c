#include"stdio.h"

struct sau_student{
	int id;
	char name[25];
	double weight;
};


main(){
	struct sau_student wow;
	wow.id = 1234;
	printf("%d\n",wow.id);
	printf("Input your name : ");
	scanf("%s",&wow.name);
	printf("Show your name : %s",wow.name);
	
	getch();
}
