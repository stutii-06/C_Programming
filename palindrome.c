#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  scanf("%s",str);
  int result=isPalindrome(str,strlen(str));
  if(result==1)
    printf("Yes..It is palindrome");
  else
    printf("No... It is not");
  return 0;
}
int isPalindrome(char st[],int len){
  int i=0,j=len-1;
  while(i<j) {
      if(st[i]!=st[j])
        return 0;
      i++;
      j--;
  }
  return 1;
}
