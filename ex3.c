#include <stdio.h>
int main()
{
    int age=23;
    int height=5;
    char Name[50];

    printf("I am %d years old.\n", age);
    printf("I am %d feet tall.\n", height);
    printf("I \t am \t learning \t C \n");
    printf("Which is your first programming language?\n");
    scanf("%s", Name);
    system("pause");

    printf("%s! Great!\n\n\n\n", Name);


    return(0);
}
