/* This function helps to determine if option is enabled or not. */

char get_option(int options, char letter) {
	return (options >> (letter - 97)) & 1;
}
