#include<stdio.h>
#include<string.h>
int main(){
    char a[]="silent";
    char b[]="listen";
    int alp1[26]={0};
    int alp2[26]={0};
    for(int i=0;i<strlen(a);i++)
        alp1[a[i]-'a']++;
    for(int j=0;j<strlen(b);j++)
        alp2[b[j]-'a']++;
    if(strlen(a)!=strlen(b))
        printf("Not an anagram");
    else{
    for(int i=0;i<26;i++){
        if(alp1[i]!=alp2[i]){
            printf("Not an anagram");
            return 0;
        }
    }
}
printf("Anagram");
return 0;
}
