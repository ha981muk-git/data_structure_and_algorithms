#include <stdio.h>
int main() {
char c;
do {
c = (char)getchar();
if (c == '\0') {
c = ' ';
}
putchar(c);
} while (c != EOF);
return 0;
}