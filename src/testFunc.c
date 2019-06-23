#include <stdio.h>

int main() {
	// the string is only till the NULL literal (\0)...
	// so in this case "John is sexey" won't be shown (as if it ain't a part of the String)
	char myString[] = "HelloWorld \0 john";
	printf("%s", myString);

	return 0;
}