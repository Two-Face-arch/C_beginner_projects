#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
static size_t n;
int Password_generator(size_t n);
void regenerator();
int Password_generator(size_t n){
	size_t length=n;
	char *password=(char*)malloc((length+1)*sizeof(char));
  if(password==NULL){
    printf("Error:Memory allocation failed\n");
    return 1;
  }
	char digits[]="0123456789";
	char alpha[]="abcdefghijklmnopqrstuvwxyz";
	char Alpha[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[]="\"`~!@#$%^&*()-_=+[]{}?<>,.:;'\'";
	srand((unsigned)time(NULL)^getpid());
	int32_t random=rand()%4;
	for(size_t i=0;i<length;i++){
		if(random==0){
			password[i]=digits[rand()%strlen(digits)];
			random=rand()%4;
			printf("%c",password[i]);
		}
		else if(random==1){
			password[i]=alpha[rand()%strlen(alpha)];
			random=rand()%4;
			printf("%c",password[i]);
		}
		else if(random==2){
			password[i]=Alpha[rand()%strlen(Alpha)];
			random=rand()%4;
			printf("%c",password[i]);
		}
		else if(random==3){
			password[i]=symbols[rand()%strlen(symbols)];
			random=rand()%4;
			printf("%c",password[i]);
		}
	}
	password[length]='\0';
  free(password);
  password=NULL;
	printf("\n");
	return 0;
}
void regenerator(){
	char again;
	do{
		printf("Generate new password(y/n):");
		again=getchar();
		while(getchar()!='\n');
		if(again=='y'){
			printf("\033[F\033[F\033[2K");
			Password_generator(n);
		}
	}while(again=='y');
	printf("Program finished\n");
}
int main(int argc,char **argv){
	printf("Enter the length of the password(Minimum length should be 8):");
	scanf("%zu",&n);
	getchar();
	if(n<8 && n>=1){
		printf("Password length too short\n");
		return 1;
	}
	Password_generator(n);
	regenerator();
	return 0;
}
