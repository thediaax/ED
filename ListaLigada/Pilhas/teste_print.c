#include <stdio.h>
#include <string.h>

void mostra_string(const char *s) {
    printf("\n%s\n", s);
}

int main(){
    char s[40];
    scanf("%s", s);

    mostra_string(s);
    return 0;
}