#include "include/sutora.h"
int main(void)
{
	sutora_init();
	struct SUTORA_CHAR c;
	while (1) {
		for (int i = 0; i < 255; i++) {
			// clang-format off
	        c.c = u'n';
			// clang-format on
			c.x = sutora_winsize_x / 2 - 3;
			c.y = sutora_winsize_y / 2;
			c.r = 0;
			c.g = i;
			c.b = 255 - i;
			char *buf = sutora_char_to_string(c);
			printf("%sekofeng\n", buf);
			free(buf);
			fflush(stdout);
			usleep(3000);
		}
		for (int i = 0; i < 255; i++) {
			// clang-format off
	        c.c = u'n';
			// clang-format on
			c.x = sutora_winsize_x / 2 - 3;
			c.y = sutora_winsize_y / 2;
			c.r = i;
			c.g = 255 - i;
			c.b = 0;
			char *buf = sutora_char_to_string(c);
			printf("%sekofeng\n", buf);
			free(buf);
			fflush(stdout);
			usleep(3000);
		}
		for (int i = 0; i < 255; i++) {
			// clang-format off
	        c.c = u'n';
			// clang-format on
			c.x = sutora_winsize_x / 2 - 3;
			c.y = sutora_winsize_y / 2;
			c.r = 255 - i;
			c.g = 0;
			c.b = i;
			char *buf = sutora_char_to_string(c);
			printf("%sekofeng\n", buf);
			free(buf);
			fflush(stdout);
			usleep(3000);
		}
	}
	return 0;
}