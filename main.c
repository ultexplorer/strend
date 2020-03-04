#include <stdio.h>
#define SIZE 1000

int strend(char *s, char *t);


int main()
{
    char s1[SIZE]="abcdefh";
    char s2[]="efh";
    int y=strend(s1, s2);
    printf("%d\n", y);
    return 0;
}

int strend(char *s, char *t)
{
    char *ps=s, *pt=t;
    for(;*s;s++);
    for(;*t;t++);
    for(;*s==*t; s--,t--){
        if(s==ps || t==pt) break;
    }
    if(*s==*t && t==pt && *s!='\0') return 1;
    else return 0;    
}