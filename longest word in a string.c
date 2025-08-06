#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a sentence:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0,maxlen=0,len=0,start=0,maxstart=0;
    while(1){
        if(str[i]!=' '&& str[i]!='\0'){
            len++;
        }
        else{
            if(len>maxlen){
                maxlen=len;
                maxstart=i-len;
            }
            len=0;
        }
        if(str[i]=='\0')
            break;
        i++;
    }
    printf("longest word: ");
    for(int i=maxstart;i<maxstart+maxlen;i++){
        printf("%c",str[i]);
    }
    printf("\nlength: %d",maxlen);

}
