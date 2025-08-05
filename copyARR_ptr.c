#include<stdio.h>
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    char str2[100];
    printf("Enter another string:");
    fgets(str,sizeof(str2),stdin);
    str[strcspn(str2,"\n")]='\0';
    char *ptr=str;
    char *ptr2=str2;
    int len1=strlen(str);
    int len2=strlen(str2);
    int len=len1+len2;
    char c[len];
    char *ptr3=c;
    for(int i=0;i<len;i++){
        if (*ptr<len){
            *ptr3=*ptr;
            ptr3++;
            ptr++;
        }
        else{
            *ptr3=*(ptr2-len1);
            ptr3++;
            ptr2++;
        }

    }
    printf("NEW:%s",c);
    return 0;
}
