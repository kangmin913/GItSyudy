#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	
	int num1,num2,help;
	int ans,ans2,check = 0;
	char word;
	while(check!=11)
	{
		num1 = rand()%20;
		num2 = rand()%20;
		help = rand()%4;
		
		/*if(help ==0)
		{
			word = '+';
			ans2 = num1 + num2;
		}
		
		else if(help ==1)
		{
			word = '-';
			ans2 = num1 - num2;
		}
		else if(help ==2)
		{
			word = '*';
			ans2 = num1 * num2;
		}
		else if(help ==3)
		{
			word = '/';
			ans2 = num1 / num2;
		}
		
		
		printf("[%d/10] %d %c %d = ",check,num1,word,num2);
		scanf("%d",&ans);
		if(ans == ans2)
		{
			printf("Correct!\n");
			++check;
		}
		else
		{
			printf("Wrong! Answer is %d\n",ans2);
		}*/
		

	}

	
}
