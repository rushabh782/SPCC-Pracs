%option noyywrap
%{
#include<stdio.h>
int vowel = 0;
int consonants = 0;
%}

%%
[aeiouAEIOU]  {printf("Vowels\t\n");vowel++;};
[^aeiouAEIOU\n]   {printf("Consonats\t\n");consonants++;}
  \n         {printf("Vowels = %d and Consonants = %d",vowel,consonants);}
%%

int main()
{
printf("Enter string of your choice: \n");
yylex();
return 0;
}
