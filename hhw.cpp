
#include <stdio.h>
#include <iostream>


// global string
char s[] = "GeeksforGeeks";

using namespace std;

// Driver Code
int main(int argc, char * argv[]) {
		while (*argv) {
			cout << *(argv++);
		}
		return 0;
	

}
