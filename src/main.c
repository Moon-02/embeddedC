/*
   Simple first embedded program.
	 Dr Alun Moon
	 September 2016
*/

#include <LPC407x_8x_177x_8x.h>

int a;
int b;
int f;
int n;
int main() {
	a = b = 1;
	while (1) { /* embedded systems don't exit */
		/* a manual version of a for loop 
		   to help show the processor and 
		   debugger in operation
		*/
		n = 0;
		while ( n<10 ) {
			/* f is the next term in the fibbonaci sequence */
			f = a + b;
			/* recycle last two values in the sequence */
			b = a;
			a = f;
			
			n++;
		}
	}
}
