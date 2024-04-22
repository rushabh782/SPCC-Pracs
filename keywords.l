%option noyywrap
%{
	#include<stdio.h>
	int keywords = 0;
%}

%%
if|else|while|int|switch|for|char  {keywords++;}
  \n  {printf("Total no of keywords:%d",keywords);}
%%

int main()
{
	printf("Enter the string of your choice:\n");
	yylex();
	return 0;
}


