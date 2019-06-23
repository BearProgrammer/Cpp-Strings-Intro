/*
	A C-Style string is a sequence (in this case an array) of characters which ends with a so called NULL-Literal... (\0)
	Functions for C_Strings:
	--- strcpy(char*destionation_string, char*string); // copy the string into the destination string
	--- strcat(char*destionation, char*string); // concatenates 
	--- strlen(char*string); // returns the length of a string (integer)

	--- strcmp(char*first, char*second); // compares the first argument to the second
		* returns an integer
		* returns value < 0 if first character is smaller (not equal...)
		* returns value > 0 if first character is larger (not equal...)
		* returns 0 if both are equal
 */
#include <iostream>
#include <cctype>
#include <string.h>

using namespace std;

int main() {
	// the string is only till the NULL literal (\0)...
	// so in this case "John is sexey" won't be shown (as if it ain't a part of the String)
	char myString[] = "HElloWOrld\0 John is sexey";
	printf("%s\n", myString);

	// now we will copy the value of the second parameter into the first parameter (the destination "string")
	// including the NULL literal
	strcpy(myString, "Bobington");
	printf("%s\n", myString);

	// strcat() concatinates both strings (adds the second parameter to the first)/ appends the second argument to the first
	strcat(myString, "'s Door");
	printf("%s\n", myString);
	
	cout << "================" << endl;
	char list[] = "23DDJohn+";
	cout << list << endl;
	cout << strlen(list) << endl; // prints the length of a string (strlen = string length)

	cout << "================" << endl;
	cout << strcmp(list, "13DDJohn+") << endl;
	cout << strcmp(list, "23DDJohn+D") << endl;
	cout << strcmp(list, "33DDJohn+") << endl;
	cout << strcmp(list, "45563DDJohn+") << endl;

	return 0;
}