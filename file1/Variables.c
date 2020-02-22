#include<stdio.h>

int main()
{
  printf("Constants :\n");
  printf("    \tConstants is a fixed value assigned to a variable which cannot be modified in a program. In C program constants is declared by using a keyword const.\n");
  printf("\nExamples :\n1.const int a=3.14, const char letter='N'.\n");
  printf("Types of constants are follows:\n");
  printf("    • Integer constant\n");
  printf("    • Real or floating point constant\n");
  printf("    • Octal and hexadecimal constants\n");
  printf("    • Character constants\n");
  printf("    • String constant\n");
  printf("\n Integer constants :\n");
  printf("    Integer constants are whole number without any fractional part. Thus integer constant consist of a sequence of digits.\n Integer constant can be written in three different number systems:\nDecimal, Octal and hexadecimal.\n");
  printf("\n Decimal integer constant :\n");
  printf("    \tThese consist of any combinations of digits taken from the set 0 through 9.");
  printf("If the decimal constant consist of two or more digits,the first digit must be something other than 0. \n");
  printf("The following valid examples are introduced:\n0,462,-82 etc\n");
  printf("\n Real or floating point constant:\n");
  printf("     \tThese constants must have  the digits along with the decimal point and it can  be either positive or negative.\n");
  printf("Examples :3.142, 4.35, -1.234 etc\n");
  printf("\n Octal constants :\n");
  printf("     \tAn Octal integer constants can consist of any combination of digits the set 0 through 7. However, the fist digit must be 0,in order to identify the constants as an octal number.\n");
  printf("Examples :012, 0555, 012 etc.\n");
  printf("\n Hexadecimal constants :\n");
  printf("    \tA hexadecimal integer  constant must begin either 0x or ox.It can then be followed by any combinations of digits taken from set 0 through 9 and A through F(either uppercase or lowercase).\n");
  printf("The following valid hexadecimal integer constants.\nExamples :0x0, -0x55, -0x12 etc.\n");
  printf("\n Character constant :\n");
  printf("     \tThese constant are single alphabet, single digit or single special symbol enclosed within single quotes.\n");
  printf("Example :'a','7','@'etc.\n");
  printf("\n String constants :\n");
  printf("These constants are single alphabet single digit or single special alphabet(s), single or several digit(s) or single several special symbols or combination of these enclosed within double quotes.\n");
  printf("Example :'a@34','745','sony' etc.\n");
         }
