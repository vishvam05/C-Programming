#include<stdio.h>
void indian();
void french();
int main()
{
    char n;
    printf("enter the nationality: ");
    scanf("%c",&n);
    if(n=='i')
    {
    indian();
    }
    else
    {
    french();
    }
    return 0;
}
void indian()
{
    printf("Rom Rom ji");
}
void french()
{
    printf("bonjour");
}
