#include <stdio.h>
#include <string.h>

void reverse(char *str);

void reverse (char *str){
    int i,n;
    char c;
    n=strlen(str);
    for(i=0;i<n/2;i++){
        c=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=c;
    }
}

int main(int argc, char *argv[]){
    reverse(argv[1]);
    printf("%s", argv[1]);
    return 0;
}
