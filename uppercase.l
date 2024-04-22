%option noyywrap
%{
	#include<stdio.h>
	int uppercase_count = 0;
%}

%%
[A-Z]+   {uppercase_count++;}
.     ; //Ignore any other characters
%%

int main()
{
	printf("Enter the token:");
	yylex();
	printf("Number of tokens with uppercase characters:%d\n",uppercase_count);
	return 0;
}
