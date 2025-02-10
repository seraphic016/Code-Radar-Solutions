#include <stdio.h>
void main() {
    char str1[20];
    int i;
    char str2[20];
    scanf("%s %d %s",&str1,&i,&str2);
    printf("Name: %s\n",str1);
    printf("Age: %d\n", i);
    printf("Hobby: %s\n",str2);
}