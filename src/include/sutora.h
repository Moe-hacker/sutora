#include <stdio.h>
#include <wchar.h>
#include <uchar.h>
#include <unistd.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
struct SUTORA_CHAR {
	// The character.
	char32_t c;
	// All settings are (int), -1 means not set.
	// The position.
	int x;
	int y;
	// The color.
	int r;
	int g;
	int b;
};
// The terminal size.
extern unsigned short sutora_winsize_x;
extern unsigned short sutora_winsize_y;
void sutora_init(void);
char *sutora_char_to_string(struct SUTORA_CHAR c);