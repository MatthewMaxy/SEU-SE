#include <stdio.h>
#include <string>
int yywrap(void);
void count(void);
void comment(void);
using namespace std;
string analysis(char* yytext, int n)
{
	int state = 0;
	int N = n + 1;//N表示串长加1,为与状态数保持一致。
	for (int i = 0; i < N; i++)
	{
		switch (state)
		{
		case 0:
		{
			if (yytext[i] == ' ')
			{
				state = 1;
				break;
			}
			else if (yytext[i] == '!')
			{
				state = 2;
				break;
			}
			else if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '%')
			{
				state = 4;
				break;
			}
			else if (yytext[i] == '&')
			{
				state = 5;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '(')
			{
				state = 7;
				break;
			}
			else if (yytext[i] == ')')
			{
				state = 8;
				break;
			}
			else if (yytext[i] == '*')
			{
				state = 9;
				break;
			}
			else if (yytext[i] == '+')
			{
				state = 10;
				break;
			}
			else if (yytext[i] == ',')
			{
				state = 11;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 12;
				break;
			}
			else if (yytext[i] == '.')
			{
				state = 13;
				break;
			}
			else if (yytext[i] == '/')
			{
				state = 14;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 15;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 16;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 16;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 16;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 16;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 16;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 16;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 16;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 16;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 16;
				break;
			}
			else if (yytext[i] == ':')
			{
				state = 17;
				break;
			}
			else if (yytext[i] == ';')
			{
				state = 18;
				break;
			}
			else if (yytext[i] == '<')
			{
				state = 19;
				break;
			}
			else if (yytext[i] == '=')
			{
				state = 20;
				break;
			}
			else if (yytext[i] == '>')
			{
				state = 21;
				break;
			}
			else if (yytext[i] == '\?')
			{
				state = 22;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == '[')
			{
				state = 24;
				break;
			}
			else if (yytext[i] == ']')
			{
				state = 25;
				break;
			}
			else if (yytext[i] == '^')
			{
				state = 26;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 27;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 28;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 29;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 30;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 31;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 32;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 33;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 34;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 35;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 36;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 37;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 38;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 39;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 40;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 41;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 42;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 23;
				break;
			}
			else if (yytext[i] == '{')
			{
				state = 43;
				break;
			}
			else if (yytext[i] == '|')
			{
				state = 44;
				break;
			}
			else if (yytext[i] == '}')
			{
				state = 45;
				break;
			}
			else if (yytext[i] == '~')
			{
				state = 46;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 1:
		{
			if (i == N - 1)
			{
				count();
				break;
			}
			return "ERROR";
		}
		case 2:
		{
			if (i == N - 1)
			{
				count(); return "!";
				break;
			}
			if (yytext[i] == '=')
			{
				state = 47;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 3:
		{
			if (yytext[i] == '\"')
			{
				state = 48;
				break;
			}
			else if (yytext[i] == '\\')
			{
				state = 49;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 4:
		{
			if (i == N - 1)
			{
				count(); return "%";
				break;
			}
			if (yytext[i] == '=')
			{
				state = 50;
				break;
			}
			else if (yytext[i] == '>')
			{
				state = 45;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 5:
		{
			if (i == N - 1)
			{
				count(); return "&";
				break;
			}
			if (yytext[i] == '&')
			{
				state = 51;
				break;
			}
			else if (yytext[i] == '=')
			{
				state = 52;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 6:
		{
			if (yytext[i] == '\\')
			{
				state = 53;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 7:
		{
			if (i == N - 1)
			{
				count(); return "(";
				break;
			}
			return "ERROR";
		}
		case 8:
		{
			if (i == N - 1)
			{
				count(); return ")";
				break;
			}
			return "ERROR";
		}
		case 9:
		{
			if (i == N - 1)
			{
				count(); return "*";
				break;
			}
			if (yytext[i] == '=')
			{
				state = 54;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 10:
		{
			if (i == N - 1)
			{
				count(); return "+";
				break;
			}
			if (yytext[i] == '+')
			{
				state = 55;
				break;
			}
			else if (yytext[i] == '=')
			{
				state = 56;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 11:
		{
			if (i == N - 1)
			{
				count(); return ",";
				break;
			}
			return "ERROR";
		}
		case 12:
		{
			if (i == N - 1)
			{
				count(); return "-";
				break;
			}
			if (yytext[i] == '-')
			{
				state = 57;
				break;
			}
			else if (yytext[i] == '=')
			{
				state = 58;
				break;
			}
			else if (yytext[i] == '>')
			{
				state = 59;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 13:
		{
			if (i == N - 1)
			{
				count(); return ".";
				break;
			}
			if (yytext[i] == '.')
			{
				state = 60;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 61;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 14:
		{
			if (i == N - 1)
			{
				count(); return "/";
				break;
			}
			if (yytext[i] == '*')
			{
				state = 62;
				break;
			}
			else if (yytext[i] == '/')
			{
				state = 63;
				break;
			}
			else if (yytext[i] == '=')
			{
				state = 64;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 15:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '.')
			{
				state = 65;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 68;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 69;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 70;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 71;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 68;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 72;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 70;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 71;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 16:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '.')
			{
				state = 65;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 68;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 74;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 75;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 68;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 76;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 75;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 17:
		{
			if (i == N - 1)
			{
				count(); return ":";
				break;
			}
			if (yytext[i] == '>')
			{
				state = 25;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 18:
		{
			if (i == N - 1)
			{
				count(); return ";";
				break;
			}
			return "ERROR";
		}
		case 19:
		{
			if (i == N - 1)
			{
				count(); return "<";
				break;
			}
			if (yytext[i] == '%')
			{
				state = 43;
				break;
			}
			else if (yytext[i] == ':')
			{
				state = 24;
				break;
			}
			else if (yytext[i] == '<')
			{
				state = 77;
				break;
			}
			else if (yytext[i] == '=')
			{
				state = 78;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 20:
		{
			if (i == N - 1)
			{
				count(); return "=";
				break;
			}
			if (yytext[i] == '=')
			{
				state = 79;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 21:
		{
			if (i == N - 1)
			{
				count(); return ">";
				break;
			}
			if (yytext[i] == '=')
			{
				state = 80;
				break;
			}
			else if (yytext[i] == '>')
			{
				state = 81;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 22:
		{
			if (i == N - 1)
			{
				count(); return "?";
				break;
			}
			return "ERROR";
		}
		case 23:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 24:
		{
			if (i == N - 1)
			{
				count(); return "[";
				break;
			}
			return "ERROR";
		}
		case 25:
		{
			if (i == N - 1)
			{
				count(); return "]";
				break;
			}
			return "ERROR";
		}
		case 26:
		{
			if (i == N - 1)
			{
				count(); return "^";
				break;
			}
			if (yytext[i] == '=')
			{
				state = 83;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 27:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 84;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 85;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 86;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 28:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 87;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 29:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 88;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 30:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 89;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 90;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 91;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 31:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 92;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 93;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 32:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 94;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 95;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 96;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 33:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 97;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 98;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 34:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 99;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 35:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 100;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 101;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 36:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 102;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 37:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 103;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 38:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 104;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 105;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 106;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 107;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 39:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 108;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 40:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 109;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 41:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 110;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 42:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '\"')
			{
				state = 3;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 6;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 111;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 43:
		{
			if (i == N - 1)
			{
				count(); return "{";
				break;
			}
			return "ERROR";
		}
		case 44:
		{
			if (i == N - 1)
			{
				count(); return "|";
				break;
			}
			if (yytext[i] == '=')
			{
				state = 112;
				break;
			}
			else if (yytext[i] == '|')
			{
				state = 113;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 45:
		{
			if (i == N - 1)
			{
				count(); return "}";
				break;
			}
			return "ERROR";
		}
		case 46:
		{
			if (i == N - 1)
			{
				count(); return "~";
				break;
			}
			return "ERROR";
		}
		case 47:
		{
			if (i == N - 1)
			{
				count(); return "NE_OP";
				break;
			}
			return "ERROR";
		}
		case 48:
		{
			if (i == N - 1)
			{
				count(); return "STRING_LITERAL";
				break;
			}
			return "ERROR";
		}
		case 49:
		{
			if (yytext[i] == ' ')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '!')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '#')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '$')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '%')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '&')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '(')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == ')')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '*')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '+')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == ',')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '.')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '/')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == ':')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == ';')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '<')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '=')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '>')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '\?')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '@')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '[')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == ']')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '^')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '`')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '{')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '|')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '}')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '~')
			{
				state = 114;
				break;
			}
			else if (yytext[i] == '')
			{
				state = 114;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 50:
		{
			if (i == N - 1)
			{
				count(); return "MOD_ASSIGN";
				break;
			}
			return "ERROR";
		}
		case 51:
		{
			if (i == N - 1)
			{
				count(); return "AND_OP";
				break;
			}
			return "ERROR";
		}
		case 52:
		{
			if (i == N - 1)
			{
				count(); return "AND_ASSIGN";
				break;
			}
			return "ERROR";
		}
		case 53:
		{
			if (yytext[i] == ' ')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '!')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '\"')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '#')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '$')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '%')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '&')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '(')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == ')')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '*')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '+')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == ',')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '.')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '/')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == ':')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == ';')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '<')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '=')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '>')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '\?')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '@')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '[')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == ']')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '^')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '`')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '{')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '|')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '}')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '~')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '')
			{
				state = 115;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 54:
		{
			if (i == N - 1)
			{
				count(); return "MUL_ASSIGN";
				break;
			}
			return "ERROR";
		}
		case 55:
		{
			if (i == N - 1)
			{
				count(); return "INC_OP";
				break;
			}
			return "ERROR";
		}
		case 56:
		{
			if (i == N - 1)
			{
				count(); return "ADD_ASSIGN";
				break;
			}
			return "ERROR";
		}
		case 57:
		{
			if (i == N - 1)
			{
				count(); return "DEC_OP";
				break;
			}
			return "ERROR";
		}
		case 58:
		{
			if (i == N - 1)
			{
				count(); return "SUB_ASSIGN";
				break;
			}
			return "ERROR";
		}
		case 59:
		{
			if (i == N - 1)
			{
				count(); return "PTR_OP";
				break;
			}
			return "ERROR";
		}
		case 60:
		{
			if (yytext[i] == '.')
			{
				state = 116;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 61:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 61;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 117;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 118;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 118;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 117;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 118;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 118;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 62:
		{
			if (i == N - 1)
			{
				comment();
				break;
			}
			return "ERROR";
		}
		case 63:
		{
			if (i == N - 1)
			{
				/* consume //-comment */
				break;
			}
			if (yytext[i] == ' ')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '!')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '\"')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '#')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '$')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '%')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '&')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '(')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == ')')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '*')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '+')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == ',')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '.')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '/')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == ':')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == ';')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '<')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '=')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '>')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '\?')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '@')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '[')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '\\')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == ']')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '^')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '`')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '{')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '|')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '}')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '~')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '')
			{
				state = 119;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 64:
		{
			if (i == N - 1)
			{
				count(); return "DIV_ASSIGN";
				break;
			}
			return "ERROR";
		}
		case 65:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 121;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 122;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 122;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 121;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 122;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 122;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 66:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '.')
			{
				state = 65;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 66;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 68;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 69;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 70;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 68;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 72;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 70;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 67:
		{
			if (yytext[i] == '.')
			{
				state = 65;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 67;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 68;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 68;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 68:
		{
			if (yytext[i] == '+')
			{
				state = 123;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 123;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 124;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 69:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == 'U')
			{
				state = 125;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 125;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 70:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == 'L')
			{
				state = 69;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 72;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 71:
		{
			if (yytext[i] == '.')
			{
				state = 126;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 127;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 72:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == 'L')
			{
				state = 128;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 125;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 69;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 125;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 73:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '.')
			{
				state = 65;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 73;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 68;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 74;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 75;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 68;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 76;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 75;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 74:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == 'U')
			{
				state = 129;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 129;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 75:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == 'L')
			{
				state = 74;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 76;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 76:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == 'L')
			{
				state = 130;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 129;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 74;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 129;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 77:
		{
			if (i == N - 1)
			{
				count(); return "LEFT_OP";
				break;
			}
			if (yytext[i] == '=')
			{
				state = 131;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 78:
		{
			if (i == N - 1)
			{
				count(); return "LE_OP";
				break;
			}
			return "ERROR";
		}
		case 79:
		{
			if (i == N - 1)
			{
				count(); return "EQ_OP";
				break;
			}
			return "ERROR";
		}
		case 80:
		{
			if (i == N - 1)
			{
				count(); return "GE_OP";
				break;
			}
			return "ERROR";
		}
		case 81:
		{
			if (i == N - 1)
			{
				count(); return "RIGHT_OP";
				break;
			}
			if (yytext[i] == '=')
			{
				state = 132;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 82:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 83:
		{
			if (i == N - 1)
			{
				count(); return "XOR_ASSIGN";
				break;
			}
			return "ERROR";
		}
		case 84:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 133;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 85:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 134;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 86:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 135;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 87:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 136;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 88:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 137;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 89:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 138;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 90:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 139;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 91:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 140;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 92:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 141;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 93:
		{
			if (i == N - 1)
			{
				count(); return "DO";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 142;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 94:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 143;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 95:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 144;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 96:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 145;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 97:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 146;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 98:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 147;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 99:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 148;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 100:
		{
			if (i == N - 1)
			{
				count(); return "IF";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 101:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 149;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 150;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 102:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 151;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 103:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 152;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 153;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 154;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 104:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 155;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 105:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 156;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 157;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 106:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 158;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 159;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 107:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 160;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 108:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 161;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 109:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 162;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 163;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 110:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 164;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 165;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 111:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 166;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 112:
		{
			if (i == N - 1)
			{
				count(); return "OR_ASSIGN";
				break;
			}
			return "ERROR";
		}
		case 113:
		{
			if (i == N - 1)
			{
				count(); return "OR_OP";
				break;
			}
			return "ERROR";
		}
		case 114:
		{
			if (yytext[i] == '\"')
			{
				state = 48;
				break;
			}
			else if (yytext[i] == '\\')
			{
				state = 49;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 115:
		{
			if (yytext[i] == '\'')
			{
				state = 167;
				break;
			}
			else if (yytext[i] == '\\')
			{
				state = 168;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 116:
		{
			if (i == N - 1)
			{
				count(); return "ELLIPSIS";
				break;
			}
			return "ERROR";
		}
		case 117:
		{
			if (yytext[i] == '+')
			{
				state = 169;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 169;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 170;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 118:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			return "ERROR";
		}
		case 119:
		{
			if (i == N - 1)
			{
				/* consume //-comment */
				break;
			}
			if (yytext[i] == ' ')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '!')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '\"')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '#')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '$')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '%')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '&')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '\'')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '(')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == ')')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '*')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '+')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == ',')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '.')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '/')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == ':')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == ';')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '<')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '=')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '>')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '\?')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '@')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '[')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '\\')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == ']')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '^')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '`')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '{')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '|')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '}')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '~')
			{
				state = 119;
				break;
			}
			else if (yytext[i] == '')
			{
				state = 119;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 120:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 120;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 171;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 172;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 172;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 171;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 172;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 172;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 121:
		{
			if (yytext[i] == '+')
			{
				state = 173;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 173;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 174;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 122:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			return "ERROR";
		}
		case 123:
		{
			if (yytext[i] == '0')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 124;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 124:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 124;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 175;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 175;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 175;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 175;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 125:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			return "ERROR";
		}
		case 126:
		{
			if (yytext[i] == '0')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 176;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 127:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '.')
			{
				state = 177;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 178;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 179;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 180;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 127;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 181;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 179;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 180;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 128:
		{
			if (yytext[i] == 'L')
			{
				state = 69;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 129:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			return "ERROR";
		}
		case 130:
		{
			if (yytext[i] == 'L')
			{
				state = 74;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 131:
		{
			if (i == N - 1)
			{
				count(); return "LEFT_ASSIGN";
				break;
			}
			return "ERROR";
		}
		case 132:
		{
			if (i == N - 1)
			{
				count(); return "RIGHT_ASSIGN";
				break;
			}
			return "ERROR";
		}
		case 133:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 182;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 134:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 183;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 135:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 184;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 136:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 185;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 137:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 186;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 138:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 187;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 139:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 188;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 140:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 189;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 190;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 141:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 191;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 142:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 192;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 143:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 193;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 144:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 194;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 145:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 195;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 146:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 196;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 147:
		{
			if (i == N - 1)
			{
				count(); return "FOR";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 148:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 197;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 149:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 198;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 150:
		{
			if (i == N - 1)
			{
				count(); return "INT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 151:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 199;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 152:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 200;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 153:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 201;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 154:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 202;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 155:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 203;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 156:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 204;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 157:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 205;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 158:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 206;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 159:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 207;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 160:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 208;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 161:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 209;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 162:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 210;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 163:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 211;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 164:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 212;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 165:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 213;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 166:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 214;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 167:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			return "ERROR";
		}
		case 168:
		{
			if (yytext[i] == ' ')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '!')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '\"')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '#')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '$')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '%')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '&')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '(')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == ')')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '*')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '+')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == ',')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '.')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '/')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == ':')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == ';')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '<')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '=')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '>')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '\?')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '@')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '[')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == ']')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '^')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '`')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '{')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '|')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '}')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '~')
			{
				state = 115;
				break;
			}
			else if (yytext[i] == '')
			{
				state = 115;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 169:
		{
			if (yytext[i] == '0')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 170;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 170:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 170;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 118;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 118;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 118;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 118;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 171:
		{
			if (yytext[i] == '+')
			{
				state = 215;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 215;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 216;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 172:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			return "ERROR";
		}
		case 173:
		{
			if (yytext[i] == '0')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 174;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 174:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 174;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 122;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 122;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 122;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 122;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 175:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			return "ERROR";
		}
		case 176:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 217;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 218;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 176;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 217;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 218;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 177:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 220;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 221;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 220;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 221;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 178:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == 'U')
			{
				state = 222;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 222;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 179:
		{
			if (yytext[i] == '+')
			{
				state = 223;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 223;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 224;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 180:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == 'L')
			{
				state = 178;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 181;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 181:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == 'L')
			{
				state = 225;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 222;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 178;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 222;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 182:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 226;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 183:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 227;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 184:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 228;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 185:
		{
			if (i == N - 1)
			{
				count(); return "AUTO";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 186:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 229;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 187:
		{
			if (i == N - 1)
			{
				count(); return "CASE";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 188:
		{
			if (i == N - 1)
			{
				count(); return "CHAR";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 189:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 230;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 190:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 231;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 191:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 232;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 192:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 233;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 193:
		{
			if (i == N - 1)
			{
				count(); return "ELSE";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 194:
		{
			if (i == N - 1)
			{
				count(); return "ENUM";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 195:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 234;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 196:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 235;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 197:
		{
			if (i == N - 1)
			{
				count(); return "GOTO";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 198:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 236;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 199:
		{
			if (i == N - 1)
			{
				count(); return "LONG";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 200:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 237;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 201:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 238;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 202:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 239;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 203:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 240;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 204:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 241;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 205:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 242;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 206:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 243;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 207:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 244;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 208:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 245;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 209:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 246;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 210:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 247;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 211:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 248;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 212:
		{
			if (i == N - 1)
			{
				count(); return "VOID";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 213:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 249;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 214:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 250;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 215:
		{
			if (yytext[i] == '0')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 216;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 216:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 216;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 172;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 172;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 172;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 172;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 217:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			return "ERROR";
		}
		case 218:
		{
			if (yytext[i] == '+')
			{
				state = 251;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 251;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 252;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 219:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 253;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 254;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 219;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 253;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 254;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 220:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			return "ERROR";
		}
		case 221:
		{
			if (yytext[i] == '+')
			{
				state = 255;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 255;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 256;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 222:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			return "ERROR";
		}
		case 223:
		{
			if (yytext[i] == '0')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 224;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 224:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 224;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 257;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 257;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 257;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 257;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 225:
		{
			if (yytext[i] == 'L')
			{
				state = 178;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 226:
		{
			if (i == N - 1)
			{
				count(); return "BOOL";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 227:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 258;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 228:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 259;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 229:
		{
			if (i == N - 1)
			{
				count(); return "BREAK";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 230:
		{
			if (i == N - 1)
			{
				count(); return "CONST";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 231:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 260;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 232:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 261;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 233:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 262;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 234:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 263;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 235:
		{
			if (i == N - 1)
			{
				count(); return "FLOAT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 236:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 264;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 237:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 265;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 238:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 266;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 239:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 267;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 240:
		{
			if (i == N - 1)
			{
				count(); return "SHORT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 241:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 268;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 242:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 269;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 243:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 270;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 244:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 271;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 245:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 272;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 246:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 273;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 247:
		{
			if (i == N - 1)
			{
				count(); return "UNION";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 248:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 274;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 249:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 275;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 250:
		{
			if (i == N - 1)
			{
				count(); return "WHILE";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 251:
		{
			if (yytext[i] == '0')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 252;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 252:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 252;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 217;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 217;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 217;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 217;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 253:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			return "ERROR";
		}
		case 254:
		{
			if (yytext[i] == '+')
			{
				state = 276;
				break;
			}
			else if (yytext[i] == '-')
			{
				state = 276;
				break;
			}
			else if (yytext[i] == '0')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 277;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 255:
		{
			if (yytext[i] == '0')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 256;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 256:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 256;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 220;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 220;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 220;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 220;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 257:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			return "ERROR";
		}
		case 258:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 278;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 259:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 279;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 260:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 280;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 261:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 281;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 262:
		{
			if (i == N - 1)
			{
				count(); return "DOUBLE";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 263:
		{
			if (i == N - 1)
			{
				count(); return "EXTERN";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 264:
		{
			if (i == N - 1)
			{
				count(); return "INLINE";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 265:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 282;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 266:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 283;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 267:
		{
			if (i == N - 1)
			{
				count(); return "RETURN";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 268:
		{
			if (i == N - 1)
			{
				count(); return "SIGNED";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 269:
		{
			if (i == N - 1)
			{
				count(); return "SIZEOF";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 270:
		{
			if (i == N - 1)
			{
				count(); return "STATIC";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 271:
		{
			if (i == N - 1)
			{
				count(); return "STRUCT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 272:
		{
			if (i == N - 1)
			{
				count(); return "SWITCH";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 273:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 284;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 274:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 285;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 275:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 286;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 276:
		{
			if (yytext[i] == '0')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 277;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 277:
		{
			if (i == N - 1)
			{
				count(); return "CONSTANT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 277;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 253;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 253;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 253;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 253;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 278:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 287;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 279:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 288;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 280:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 289;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 281:
		{
			if (i == N - 1)
			{
				count(); return "DEFAULT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 282:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 290;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 283:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 291;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 284:
		{
			if (i == N - 1)
			{
				count(); return "TYPEDEF";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 285:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 292;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 286:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 293;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 287:
		{
			if (i == N - 1)
			{
				count(); return "COMPLEX";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 288:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 294;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 289:
		{
			if (i == N - 1)
			{
				count(); return "CONTINUE";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 290:
		{
			if (i == N - 1)
			{
				count(); return "REGISTER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 291:
		{
			if (i == N - 1)
			{
				count(); return "RESTRICT";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 292:
		{
			if (i == N - 1)
			{
				count(); return "UNSIGNED";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 293:
		{
			if (i == N - 1)
			{
				count(); return "VOLATILE";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 294:
		{
			if (i == N - 1)
			{
				count(); return "IDENTIFIER";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 295;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		case 295:
		{
			if (i == N - 1)
			{
				count(); return "IMAGINARY";
				break;
			}
			if (yytext[i] == '0')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '1')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '2')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '3')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '4')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '5')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '6')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '7')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '8')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '9')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'A')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'B')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'C')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'D')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'E')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'F')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'G')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'H')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'I')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'J')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'K')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'L')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'M')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'N')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'O')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'P')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'R')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'S')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'T')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'U')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'V')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'W')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'X')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'Z')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == '_')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'a')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'b')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'c')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'd')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'e')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'f')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'g')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'h')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'i')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'j')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'k')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'l')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'm')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'n')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'o')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'p')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'q')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'r')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 's')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 't')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'u')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'v')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'w')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'x')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'y')
			{
				state = 82;
				break;
			}
			else if (yytext[i] == 'z')
			{
				state = 82;
				break;
			}
			else
			{
				return "ERROR";
			}
			break;
		}
		}
	}
}

int yywrap(void)
{
	return 1;
}

void comment(void)
{
	/*char c, prev = 0;

	while ((c = input()) != 0)      //(EOF maps to 0)
	{
		if (c == '/' && prev == '*')
			return;
		prev = c;
	}
	error("unterminated comment"); */
}

int column = 0;
void count(void)
{
	/*int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;*/
}

/*int check_type(void)
{

// pseudo code --- this is what it should check
//
//	if (yytext == type_name)
//		return TYPE_NAME;

//	return IDENTIFIER;



//	it actually will only return IDENTIFIER


	return IDENTIFIER;
}
*/