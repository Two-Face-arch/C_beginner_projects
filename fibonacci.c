#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
int main(int argc,char **argv){
	uint16_t x=0;
	uint16_t y=1;
	uint16_t z=0;
	while(x<=255){
		printf("%"PRIu16"\n",x);
		z=x+y;
		x=y;
		y=z;
	}
	return 0;
}

