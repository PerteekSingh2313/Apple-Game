#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num,a,total=21,i,j;
	char a1[]="Prateek";
	char p1[]="123";
	char s[]=" Welcome To Apple Game ";
	char s1[]=" Now you can Enter the Game ";
	char a2[8],p[4];
	system("color 3e");

	printf("\v\v\v");
	for(i=0;i<10;i++){
		printf(":::");
		usleep(100000);

	}

	i=0;
	while(s[i]!= '\0'){
		printf("%c",s[i++]);
		usleep(100000);
	}
	for(i=0;i<10;i++){
		printf(":::");
		usleep(100000);
	}
	
	
	for(j=0;j<3;j++){
		printf("\n\n\vEnter User Name:  ");
		scanf("%s",a2);
		printf("\n\n\vEnter User Password:  ");
		i=0;
		while(i<3){
			p[i++] = getch();
			printf("*");
		}
		p[i] ='\0';
		
	
		if(strcmp(a2,a1)){
			printf("\n\vPlease Enter Valid Name :");
		}
		else if(strcmp(p,p1)){
			printf("\n\vPlease Enter Valid Password :");
		}
		else break;
	}
	if(j==3){
		printf("\n\nPlay Next Time\n\t Thanks");
		exit(1);
	}
	
	printf("\v\v\v");
	for(i=0;i<10;i++){
		printf(":::");
		usleep(100000);

	}

	i=0;
	while(s1[i]!= '\0'){
		printf("%c",s1[i++]);
		usleep(100000);
	}
	for(i=0;i<10;i++){
		printf(":::");
		usleep(100000);
	}
	system("cls");
	printf("\n\v\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("Rules:-\n1. Please Enter Only these Numbers 1, 2, 3, and 4.\n");
	printf("2. Another Input is Invalid:\n");
	printf("3. Whoever gets the number last will lose.\n");
	printf("4. Now You are Playing to Your Computer :\n");
	printf("5. Total Number is 21\n\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

	while(total>=0){
		printf("Enter Your Number: ");
		scanf("%d",&num);
		if((num>0 && num<5) && num<=total){
			printf("Your's Number : %d\n",num);
			total-=num;
			printf("Now Total Number : %d\n",total);
			if(total>=10) a=4;
			else if(total>=6) a=2;
			switch(total){
				case 1: a=1;
						printf("Computer Number : %d\n",a); 
						printf("\n\nYou will win this game:\n\n");
					    break;
				case 2: a=1; printf("Computer Number : %d\n",a);
						printf("\n\nYou will lose this game:\n\n"); break;
				case 3: a=2; printf("Computer Number : %d\n",a);
						printf("\n\nYou will lose this game:\n\n"); break;
				case 4: a=3; printf("Computer Number : %d\n",a);
						printf("\n\nYou will lose this game:\n\n"); break;
				case 5: a=4; printf("Computer Number : %d\n",a);
						printf("\n\nYou will lose this game:\n\n"); break;
			}
			if(total<6) break;
			printf("Computer Number : %d\n",a);
			total-=a;
			printf("Now Total Number : %d\n\n\n",total);
		}
		else printf("Enter valid Number : \n\n");
		system("pause");
		system("cls");
	}

	return 0;
}
