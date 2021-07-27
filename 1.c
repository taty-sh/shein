#include <stdio.h>

int main()
{
int  c, b = 0;
  
	while((c = getchar()) != EOF)
	{
		if (c != ' ')
		putchar(c);
		else if (b != ' ')
		putchar(c);
		b = c;	
	}

}
