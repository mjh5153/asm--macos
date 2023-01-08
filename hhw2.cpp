
#include <stdio.h>
#include <iostream>


// global string
char s[] = "GeeksforGeeks";

using namespace std;

// Driver Code
int main(int argc, char * argv[]) {
	
		top:
			if (*argv) {
				cout << *(argv++) << std::endl;
				goto top;
			}
		return 0;
	

}
