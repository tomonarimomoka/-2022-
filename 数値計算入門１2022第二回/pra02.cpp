#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>


//d=18のときr=0.314159
//d=77のときr=1.343904
int main(){
	//int WINAPI;
	printf("d=");

	double d;
	scanf("%lf", &d);

	double r = d * (M_PI/180.0);

	printf("r=%lf\n", r);
	//printf("ラジアン表記では" + r+ "です。");
	//printf("r=%lfﾏ\n", r/M_PI);
	return 0;
 }