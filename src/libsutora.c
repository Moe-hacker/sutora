#include "include/sutora.h"
unsigned short sutora_winsize_x;
unsigned short sutora_winsize_y;
void sutora_init(void)
{
	// Don't ask why, if not, c32rtomb() will fail.
	setlocale(LC_ALL, "");
	// Get the terminal size.
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	sutora_winsize_y = w.ws_row;
	sutora_winsize_x = w.ws_col;
}
char *sutora_char_to_string(struct SUTORA_CHAR c)
{
	// Convert SUOTRA_CHAR::c to (char *)
	char *character = malloc(64);
	mbstate_t state = { 0 };
	size_t len = c32rtomb(character, c.c, &state);
	if (len == (size_t)-1) {
		free(character);
		exit(1);
	}
	character[len] = '\0';
	char *ret = malloc(64);
	ret[0] = '\0';
	char *buf = malloc(128);
	buf[0] = '\0';
	// If we set the position.
	if ((c.y >= 0) && (c.x >= 0)) {
		sprintf(buf, "\033[%dH\033[%dG", c.y, c.x);
		strcat(ret, buf);
	}
	// If we set the color.
	if ((c.r >= 0) && (c.g >= 0) && (c.b >= 0)) {
		sprintf(buf, "\033[1;38;2;%d;%d;%dm", c.r, c.g, c.b);
		strcat(ret, buf);
	}
	strcat(ret, character);
	free(character);
	return ret;
}