# include <stdio.h>
int main()
{
    /*
    char ch[11]={'j','a','v','a','t','p','o','i','n','t'};
    char ch2[11]="javatpoint";
    printf("%s\n",ch);
    printf("\n%s",ch2);
    */
   /*char name[20];
   printf("enter name: ");
   scanf("%s", &name);
   printf("your name is %s.",name);*/
   char name[20];
   printf("enter name: ");
   gets(name);
   printf("your name is ");
   puts(name);
   printf(".");
    return 0;

}