/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	
	while(testcase!=1)
	{
		
		for (int i=2;i<=testcase;i++)
		{
			int check=0;
			if (testcase%i==0)
			{
				if (i!=testcase)
			{
			printf("%d*",i);
			}
			else
			{
				printf("%d",i);
			}
			testcase=testcase/i;
			check=1;
			break;
			}
			if(check==1)
			{
				break;
			}
			
		}
	}
	return 0;
}
