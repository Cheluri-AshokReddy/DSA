#include<stdio.h>
#include<string.h>

struct Bank
{
	char name[25];
	long accNo;
	char IFSC[25];
	float amount;
	char branch[20];
};

void input(struct Bank *b)
{
		printf("   account details \n");
		fflush(stdin);
		printf("enter account holder name : ");
		gets(b->name);
		
		printf("enter account number : ");
		scanf("%ld",&b->accNo);
		fflush(stdin);
		printf("enter bank's IFSC code : ");
		gets(b->IFSC);
		
		printf("enter branch name: ");
		gets(b->branch);
		
		printf("enter amount : ");
		scanf("%f",&b->amount);
		
		printf("\n");
}

void display(struct Bank *b)
{
		printf("-------account details--------\n");
		
		printf("name : %s \n",b->name);
		printf("account number : %ld \n",b->accNo);
		printf("IFSC code : %s \n",b->IFSC);
		printf("branch : %s\n",b->branch);
		printf("amount : %f \n",b->amount);
		
		printf("--------------------------------\n");
	
}

int main()
{
	struct Bank b;
	
	input(&b);
	display(&b);
	
}
