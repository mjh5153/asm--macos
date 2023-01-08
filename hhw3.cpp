
#include <stdio.h>
#include <iostream>



using namespace std;

// Driver Code
int main(int argc, char * argv[]) {
	
		top:
			if (*argv == NULL)
				goto bottom; 
			puts(*(argv++));
			goto top;
		
		bottom:	
			return 0;
	

}
