#include <stdio.h>
#include <string.h>

char sent[1000005];

int main(){
    int count = 0;

    scanf("%[^\n]s",sent);

    if(sent[0]!=' ') count++;

    for(int i=1;i<strlen(sent);i++)
        if(sent[i-1]==' ' && sent[i]!=' ') count++;

    printf("%d",count);

    return 0;
}