#include <stdio.h>

int main(void) {
  char a = 'a';
	printf("hello world!\n");
  printf("type\t\t\tsyntax\t\t\tpossible qualifiers\t\t\t%%display options\n");
  printf("----\t\t\t------\t\t\t-------------------\t\t\t-----------------\n");
  printf("character\t\tchar\t\tunsigned(0--255), signed(-128 -- +127)\t\t:%%c, %%d, %%i, %%zu\n", a);
  printf("\n");
  printf("Example: %%c: %c, %%d: %d, %%zu: %zu, %%b: %b\n", a, a, sizeof(a), a);
  int b = 1;
  printf("\nSigned int -2 decimal: %d", b);
}
