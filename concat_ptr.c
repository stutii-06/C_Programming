#include <stdio.h>
#include <string.h>
int main() {
    char a[] = "sthuti ";
    char b[] = "sharma";
    int len = strlen(a) + strlen(b);
    char c[len + 1];
    char *p1 = a;
    char *p2 = b;
    char *p3 = c;
    while (*p1 != '\0') {
        *p3 = *p1;
        p3++;
        p1++;
    }
    while (*p2 != '\0') {
        *p3 = *p2;
        p3++;
        p2++;
    }
    *p3 = '\0';
    printf("Concatenated string: %s\n", c);
    return 0;
}
