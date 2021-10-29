//
#include <stdio.h>

int main()
{
	int English,Maths,Science,Kiswahili,Computer,Sum,Average;
	printf("Enter English\n");
	printf("Enter Maths\n");
	printf("Enter Science\n");
	printf("Enter Kiswahili\n");
	printf("Enter Computer\n");
	scanf("%d%d%d%d%d", &English,&Maths,&Science,&Kiswahili,&Computer);
	{
		Sum=(English+Maths+Science+Kiswahili+Computer);
		Average=(Sum/5);
        printf("Average is %d\n",Average);
		if(Average>=90&&Average<=100)
		{
			printf("Grade A");
		}
		else if(Average>=80&&Average<90)
		{
			printf("Grade B");
		}
		else if(Average>=70&&Average<80)
		{
			printf("Grade C");
		}
		else if (Average>=80&&Average<70)
		{
			printf("Grade D");
		}
		else if (Average>=70&&Average<60)
		{
			printf("Grade E");
		}
	}
}
    
