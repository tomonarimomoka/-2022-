#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>


//d=18�̂Ƃ�r=0.314159
//d=77�̂Ƃ�r=1.343904
int main(){
	//int WINAPI;
	printf("d=");

	double d;
	scanf("%lf", &d);

	double r = d * (M_PI/180.0);

	printf("r=%lf\n", r);
	//printf("���W�A���\�L�ł�" + r+ "�ł��B");
	//printf("r=%lfπ\n", r/M_PI);
	return 0;
 }