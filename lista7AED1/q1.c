#include<stdio.h>
#include<math.h>
int main(){
	int x,y,z;
	x=y=z=15;
	y=pow(y,2);
	x--;
	y=z--;
	z=--y;
	z-=2*4;
	y=(x>z?x:z);
	if(z<x)
		printf("%d %d %d %d",x,y,z,1*1);
	else
		printf("%d %d %d %d",1*1,z,y,x);
	
	return 0;
}
