#include"stdio.h"

main(){
	int score;
	long a;
	short b;
	
	double salary[5];
	float weight;
	
	int *p1;//pointer
	
	p1 = &a;
	printf("%d\n",p1);
	printf("%d\n",&a);
	a = 100;
	printf("%d\n",a);
	printf("%d\n",*p1);
	
	score = 15;
	salary[2] = 1.75;
	
	score = 20;
	
	printf("%d",score);
	
	getch();
}
