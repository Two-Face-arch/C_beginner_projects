#include <stdio.h>
#include <math.h>
void calculate(char ch);

int main(int argc,char **argv){
	printf("Enter the operation to be performed\n");
	printf("Enter + for addition\n");
	printf("Enter - for subtraction\n");
	printf("Enter * for multiplication\n");
	printf("Enter / for division and get the quotient\n");
	printf("Enter %% for division and get the remainder\n");
	printf("Enter p to do exponential calculation\n");
	printf("Enter s to get the square root of a number\n");
	printf("Enter c to get the cube root of a number\n");
	char ch;
	scanf("%c",&ch);
	calculate(ch);
	return 0;
}
void calculate(char ch){
	switch(ch){
		double n;
		double n2;
		case '+':
			printf("Enter the first number:");
			scanf("%lf",&n);
			printf("Enter the second number:");
			scanf("%lf",&n2);
			printf("Sum=%lf\n",(n+n2));
			break;
		case '-':
		        printf("Enter the first number:");
			scanf("%lf",&n);
			printf("Enter the second number:");
			scanf("%lf",&n2);
			printf("Difference=%lf\n",(n-n2));
			break;
		case '*':
		        printf("Enter the first number:");
			scanf("%lf",&n);
			printf("Enter the second number:");
			scanf("%lf",&n2);
			printf("Product=%lf\n",(n*n2));
			break;
		case '/':
		        printf("Enter the first number:");
			scanf("%lf",&n);
			printf("Enter the second number:");
			scanf("%lf",&n2);
			if(n2==0){
				printf("Division by 0 not possible\n");
			return;
			}
			printf("Quotient=%lf\n",(n/n2));
			break;
		case '%':
		        printf("Enter the first number:");
			scanf("%lf",&n);
			printf("Enter the second number:");
			scanf("%lf",&n2);
			if(n2==0){
				printf("Division by 0 not possible\n");
				return;
			}
			printf("Remainder=%d\n",((int)n%(int)n2));
			break;
                case 'p':
		        printf("Enter the first number:");
			scanf("%lf",&n);
			printf("Enter the second number:");
			scanf("%lf",&n2);
			if(n<0 && floor(n2)!=n2){
				printf("Error: Negative integer with non integer exponent\n");
				return;
			}
			printf("%lf raised to power of %lf=%lf\n",n,n2,pow(n,n2));
			break;
                case 's':
		        printf("Enter the number:");
			scanf("%lf",&n);
			if(n<0){
				printf("Error: Square root of negative number not possible\n");
				return;
			}
			printf("Square root of %lf=%lf\n",n,sqrt(n));
			break;
                case 'c':
		        printf("Enter the number:");
			scanf("%lf",&n);
			printf("Cube root of %lf=%lf\n",n,cbrt(n));
			break;
		default:
			printf("Invalid character input\n");
	}
}
