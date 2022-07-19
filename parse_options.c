/* Function parses through passed string array for letters and returns integer, where every bit represents
one letter in alphabetical order. The function stops parsing and returns if the string does not start with
a '-' character. The function stops and moves to the next string if it encounters other than alphabet during
string parsing. Add -lm option when compiling to link libm. */

#include <math.h>
#include <ctype.h>

#define ALPHABET "abcdefghijklmnopqrstuvwxyz"

int parse_options(char ***argv) {
	int options = 0;
	char index;

	*argv += 1;
	for (*argv; **argv; *argv += 1) {
		if (***argv != 45)
			break;
		**argv += 1;
		for (**argv; isalpha(***argv); **argv += 1) {
			index = 0;
			for (index; ALPHABET[index] && ***argv; index += 1)
				if (***argv == ALPHABET[index]) {
					options |= (int)pow(2, index);
					break;
				}
		}
	}
	return options;
}
