#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
 char isLowercaseVowel,isUppercaseVowel;
 do
 {
   printf("\nEnter an alphabet");
   scanf("%c",&c);
   }while(!isalpha(c));
  
   isLowercaseVowel=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
   isUppercaseVowel=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
   if(isLowercaseVowel || isLowercaseVowel)
   {
    printf("\n%c is Vowel",c);
    else
    printf("\n%c is Consonant",c);
    }
    return 0;
    getch();
    }
   
