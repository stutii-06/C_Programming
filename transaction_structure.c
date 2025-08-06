#include<stdio.h>
struct transaction{
    char type[50];
    int amt;
    char date[15];
    };
int main(){
    struct transaction t[100];
    int num_t=0;
    int choice;
    do{
        printf("\nBANK TRANSACTION MENU");
        printf("\n1.AddTransaction");
        printf("\n2.View transaction");
        printf("\n3.Exit");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            if(num_t<100){
                printf("Enter transaction type:");
                scanf("%s",t[num_t].type);
                printf("Enter amount:");
                scanf("%d",&t[num_t].amt);
                printf("Enter date:");
                scanf("%s",t[num_t].date);
                num_t++;
                printf("Transaction added successfulyy");
            }
            else
                printf("Transaction limit reached");
                break;
            case 2:
                if(num_t>0){
                    printf("Transaction history");;
                    for(int i=0;i<num_t;i++){
                        printf("TYPE:%s  AMOUNT:%d  DATE:%s\n",t[i].type,t[i].amt,t[i].date);
                    }}
                    else
                        printf("No transaction");
                        break;
            case 3:
                printf("Exiting");
                break;


        }

    }
    while (choice!=3);
    return 0;
}
