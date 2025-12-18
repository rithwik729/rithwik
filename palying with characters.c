 #include<stdio.h>
int main ()
{
    char c;
    char word[100];
    char sen[1000];
    printf("enter character");
    scanf("%c",&c);
    printf("enter word");
    scanf("%s",word);
    printf("enter sentence");
    scanf(" %[^\n]%*c",sen);
    printf("%c\n",c);
    printf("%s\n",word);
    printf("%s\n",sen);
    return 0;
}
