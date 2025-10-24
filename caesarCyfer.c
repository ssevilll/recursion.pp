#include<stdio.h>
#include<string.h>

int main() {
   char word[256];
   int n;
   scanf ("%s", word);
   scanf("%d", &n);

   for (int i=0; i<strlen(word); i++) {
    int code=word[i];
    if (code-n<65) {
        word[i]=word[i]-n+26;
        printf("%c", word[i]);
    }
    else {
        word[i]=word[i]-n;
        printf("%c",word[i]);
    }
   }
   
   
   return 0;
}
