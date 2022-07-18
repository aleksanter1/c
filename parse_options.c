/* Function parses through passed string array for letters and returns integer, where every bit represents
one letter in alphabetical order. Function stops parsing if the string does not start with a '-' character.
Add -lm option when compiling to link libm. */

#include <math.h>

#define ALPHABET "abcdefghijklmnopqrstuvwxyz"

int parse_options(char **argv) {
	int options = 0;
	char index;

	for (argv; *argv; argv += 1) {
		if (**argv != 45)
			break;
		for (*argv; **argv; *argv += 1) {
			index = 0;
			for (index; ALPHABET[index] && **argv; index += 1)
				if (**argv == ALPHABET[index]) {
					options |= (int)pow(2, index);
					break;
				}
		}
	}
	return options;
}
