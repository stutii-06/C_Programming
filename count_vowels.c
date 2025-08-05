// Count Vowels using a function
#include <stdio.h>
#include <ctype.h>


int isVowel(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;
   
   return 0;
}
int getVowelCount(char a[])
{
   int count = 0, i = 0;
   char ch;
   while (a[i] != '\0'){  
      ch = a[i];
      
      if (isVowel(ch))
         count++;
      i++;
   }
   return count;
}


int main()
{
   char str[100];
   printf("Enter a string\n");
   scanf("%[^\n]s",&str);
   printf("Total Vowels: %d\n", getVowelCount(str));
   return 0;
}
