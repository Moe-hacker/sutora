#include "sutora.h"
void error(const char *msg)
{
  /*
   * Show error message and exit.
   */
  fprintf(stderr, "\033[31m%s\033[0m\n", msg);
  // A very cute catgirl nya~~
  fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", "  .^.   .^.");
  fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", "  /⋀\\_ﾉ_/⋀\\");
  fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", " /ﾉｿﾉ\\ﾉｿ丶)|");
  fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", " ﾙﾘﾘ >  x )ﾘ");
  fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", "ﾉノ㇏  ^ ﾉ|ﾉ");
  fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", "      ⠁⠁");
  fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", "If you think something is wrong, please report at:");
  fprintf(stderr, "\033[4;1;38;2;254;228;208m%s\033[0m\n", "https://github.com/Moe-hacker/sutora/issues");
  exit(1);
}
void show_version_info()
{
  /*
   * Just show version info and license.
   * Version info is defined in macro NEKOASC_VERSION.
   * NEKOASC_COMMIT_ID is defined in Makefile.
   */
  printf("\n");
  printf("\033[1;38;2;254;228;208m");
  printf("   ●●●  ●   ● ●●●●●  ●●●   ●●●●    ●   \n");
  printf("  ●     ●   ●   ●   ●   ●  ●   ●  ● ●  \n");
  printf("   ●●●  ●   ●   ●   ●   ●  ●●●●  ●   ● \n");
  printf("      ● ●   ●   ●   ●   ●  ●  ●  ●●●●● \n");
  printf("   ●●●   ●●●    ●    ●●●   ●   ● ●   ● \n");
  printf("       Licensed under the MIT License\n");
  printf("          <https://mit-license.org>\n");
  printf("        Copyright (C) 2023 Moe-hacker\n");
  printf("%s%s%s", "           Sutora version : ", SUTORA_VERSION, "\n");
  printf("%s%s%s\033[0m", "           Commit id       : ", SUTORA_COMMIT_ID, "\n");
  printf("\n");
}