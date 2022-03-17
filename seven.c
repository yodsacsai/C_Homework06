#include"stdio.h"
//return_type
int show3(){
	int x = 20;
	printf("AAA\n");
	
	return x % 5;
}

main(){
	int y =15;
	printf("%d\n",show3());
	y = y + show3();
	printf("%d\n",y);
	
	getch();
}
