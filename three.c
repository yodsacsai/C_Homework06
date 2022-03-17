#include"stdio.h"

typedef struct sau{
	int x;
	int y;
}art;

main(){
	struct sau wow;
	art wee;
	
	wow.x = 20;
	printf("%d\n",wow.x);
	wee.y = 100;
	printf("%d\n",wee.y);
	
	getch();
}
