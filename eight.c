#include"stdio.h"

double met2(){
	return 10 % 3 + 5 * 2;
}

double met1(int x){ // x->parameter
	double y = 5.5; //Local variable
	printf("Y is %.2lf\n",y + met2());
	return x - y;
}

main(){
	double z = 10;
	double p;
	printf("A\n");
	p = z + met1(5);
	printf("Value is %.2lf\n",p + met1(10) + met2());
	getch();
}
