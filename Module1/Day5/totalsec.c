#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter time(H:M:S):");
    scanf("%s",str);
    char *token=strtok(str,":");
    int hrs,min,sec,tsec;
    hrs=strtol(token,NULL,10);
    token=strtok(NULL,":");
    min=strtol(token,NULL,10);
    token=strtok(NULL,":");
    sec=strtol(token,NULL,10);
    tsec=hrs*3600+min*60+sec;
    printf("Total seconds:%d",tsec);
    return 0;
}