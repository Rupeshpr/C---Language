/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int amount=20000;
int deposit(){
	int deposit,main_balance;
	printf("Enter the deposit:\n");
	scanf("%d",&deposit);
	printf("your deposit amount is %d:\n",deposit);
	main_balance = amount+deposit;
	printf("your total balance %d \n",main_balance);
}

int withdraw(){
	int withdraw,main_balance;
	printf("Enter the withdraw:\n");
	scanf("%d",&withdraw);
	printf("your withdraw amount is %d:\n",withdraw);
	main_balance = amount-withdraw;
	printf("your total balance %d \n",main_balance);
}

int main()
{
	int input;
    int value;
    printf("press1 for check balancing\n press2 for check deposit\n press3 for cash withdraw");
    scanf("%d",&value);
    switch(value){
        case  1:
        printf("Amount is %d: \n",amount);
        break;
        
        case 2:
        deposit();
        break;
        
        case 3:
        withdraw();
        break;
		
        default:
        printf("Invalid");       
    }
    return 0;
}


//Multiplication table
#include <stdio.h>

/*int main()
{
    int n,i,mul;
    printf("Enter the number which you want to print a table");
    scanf("%d",&n);
    
    for(i=1;i<=10;i++){
        mul=n*i;
        printf("%d*%d=%d\n",n,i,mul);
    }
    return 0;
}*/
