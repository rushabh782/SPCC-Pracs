%{
	#include<stdio.h>
	int lc = 0,ch=0;//global variable
%}

%%
[\n]  {lc++; ch+=yyleng;}
%%

int yywrap(){return 1; }

int main()
{
	printf("Enter the sentence:");
	yylex();
	printf("Number of lines:%d\n",lc);
	return 0;
}
