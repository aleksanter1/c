#include <unistd.h>

void print_byte(char byte) {
	char index = 0;
	char bits[10];

	for (index; index < 9; index += 1) {
		bits[index] = (byte & 1) + 48;
		byte = byte >> 1;
		if (index == 3)
			bits[++index] = 32;
	}
	bits[index] = 10;
	write(1, bits, 10);
}
