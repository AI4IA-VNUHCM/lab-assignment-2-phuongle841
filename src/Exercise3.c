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
	if (testcase!=1)
	{
		for (int i = 3; i <= testcase; i+=2)
		{
			int check=0;
			for (int j = 3; j<=i/2; j+=2)
			{
				if (i%j==0)
				{
					check=1;
					break;
				}	
			
				if (check==0)
				{
					if(testcase%i==0)
					{
						printf("%d *",i);
						testcase=testcase/i;
					}
				}	
			}
			
		}
		
	}
	
	return 0;
}
