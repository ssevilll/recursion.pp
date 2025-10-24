#include<stdio.h>
#include<string.h>

int main() {
   char s[10001];
   fgets(s, sizeof(s), stdin);

   int n,m;
   scanf("%d %d", &n,&m);

    strcpy(s + n, s + m + 1);
    printf("%s", s);

   
   return 0;
}
