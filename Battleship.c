//BattleShip
//Jonathan Keller John Lowery Correy Huppert

#include <stdio.h>

//h (hidden) values figure out if it is hit or miss, while the other ones are the ones that are diplayed (` for miss, X for hit, and spaces for not tried yet)
char a[9];
int ah[9];
char b[9];
int bh[9];
char c[9];
int ch[9];
char d[9];
int dh[9];
char e[9];
int eh[9];
char f[9];
int fh[9];
char g[9];
int gh[9];
char h[9];
int hh[9];
char i[9];
int ih[9];
char j[9];
int jh[9];

//this function initalizes the arrays
void initialize_arrays()
{
int counter =0;
while (counter<10)
{
  ah[counter]=0;
counter++;
}
counter=0;
while (counter<10)
{
  bh[counter]=0;
counter++;
}
counter=0;
while (counter<10)
{
  ch[counter]=0;
counter++;
}
counter=0;
while (counter<10)
{
  dh[counter]=0;
counter++;
}
counter=0;
while (counter<10)
{
  eh[counter]=0;
counter++;
}
counter=0;
char lj=' ';
while (counter<10)
{
  fh[counter]=0;
counter++;
}
counter=0;
while (counter<10)
{
  gh[counter]=0;
counter++;
}
counter=0;
while (counter<10)
{
  hh[counter]=0;
counter++;
}
counter=0;
while (counter<10)
{
  ih[counter]=0;
counter++;
}
counter=0;
while (counter<10)
{
  jh[counter]=0;
counter++;
}
counter=0;
while (counter<10)
{
  a[counter]=' ';
counter++;
}
counter=0;
while (counter<10)
{
  b[counter]=' ';
counter++;
}
counter=0;
while (counter<10)
{
  c[counter]=' ';
counter++;
}
counter=0;
while (counter<10)
{
  d[counter]=' ';
counter++;
}
counter=0;
while (counter<10)
{
  e[counter]=' ';
counter++;
}
counter=0;
while (counter<10)
{
  f[counter]=' ';
counter++;
}
counter=0;
while (counter<10)
{
  g[counter]=' ';
counter++;
}
counter=0;
while (counter<10)
{
  h[counter]=' ';
counter++;
}
counter=0;
while (counter<10)
{
  i[counter]=' ';
counter++;
}
counter=0;
while (counter<10)
{
  j[counter]=' ';
counter++;
}
counter=0;
}//end of function initialize_arrays


void print_screen(char input_char, int input_int)//will be 5 spaces in between each vertical line filled with the
{
  printf("\n\n\n\n\n\n\n\n    *************************BATTLESHIP*************************\n");
  printf("      1     2     3     4     5     6     7     8     9     10\n");
  printf("     ___________________________________________________________\n");
  printf("A  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", a[0], a[0], a[0], a[0], a[0], a[1], a[1], a[1], a[1], a[1], a[2], a[2], a[2], a[2], a[2], a[3], a[3], a[3], a[3], a[3], a[4], a[4], a[4], a[4], a[4], a[5], a[5], a[5], a[5], a[5], a[6], a[6], a[6], a[6], a[6], a[7], a[7], a[7], a[7], a[7], a[8], a[8], a[8], a[8], a[8], a[9], a[9], a[9], a[9], a[9], a[10], a[10], a[10], a[10], a[10]);
  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", a[0], a[0], a[0], a[0], a[0], a[1], a[1], a[1], a[1], a[1], a[2], a[2], a[2], a[2], a[2], a[3], a[3], a[3], a[3], a[3], a[4], a[4], a[4], a[4], a[4], a[5], a[5], a[5], a[5], a[5], a[6], a[6], a[6], a[6], a[6], a[7], a[7], a[7], a[7], a[7], a[8], a[8], a[8], a[8], a[8], a[9], a[9], a[9], a[9], a[9], a[10], a[10], a[10], a[10], a[10]);
  printf("    ___________________________________________________________\n");
  printf("B  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", b[0], b[0], b[0], b[0], b[0], b[1], b[1], b[1], b[1], b[1], b[2], b[2], b[2], b[2], b[2], b[3], b[3], b[3], b[3], b[3], b[4], b[4], b[4], b[4], b[4], b[5], b[5], b[5], b[5], b[5], b[6], b[6], b[6], b[6], b[6], b[7], b[7], b[7], b[7], b[7], b[8], b[8], b[8], b[8], b[8], b[9], b[9], b[9], b[9], b[9], b[10], b[10], b[10], b[10], b[10]);
  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", b[0], b[0], b[0], b[0], b[0], b[1], b[1], b[1], b[1], b[1], b[2], b[2], b[2], b[2], b[2], b[3], b[3], b[3], b[3], b[3], b[4], b[4], b[4], b[4], b[4], b[5], b[5], b[5], b[5], b[5], b[6], b[6], b[6], b[6], b[6], b[7], b[7], b[7], b[7], b[7], b[8], b[8], b[8], b[8], b[8], b[9], b[9], b[9], b[9], b[9], b[10], b[10], b[10], b[10], b[10]);
  printf("    ___________________________________________________________\n");
  printf("C  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", c[0], c[0], c[0], c[0], c[0], c[1], c[1], c[1], c[1], c[1], c[2], c[2], c[2], c[2], c[2], c[3], c[3], c[3], c[3], c[3], c[4], c[4], c[4], c[4], c[4], c[5], c[5], c[5], c[5], c[5], c[6], c[6], c[6], c[6], c[6], c[7], c[7], c[7], c[7], c[7], c[8], c[8], c[8], c[8], c[8], c[9], c[9], c[9], c[9], c[9], c[10], c[10], c[10], c[10], c[10]);
  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", c[0], c[0], c[0], c[0], c[0], c[1], c[1], c[1], c[1], c[1], c[2], c[2], c[2], c[2], c[2], c[3], c[3], c[3], c[3], c[3], c[4], c[4], c[4], c[4], c[4], c[5], c[5], c[5], c[5], c[5], c[6], c[6], c[6], c[6], c[6], c[7], c[7], c[7], c[7], c[7], c[8], c[8], c[8], c[8], c[8], c[9], c[9], c[9], c[9], c[9], c[10], c[10], c[10], c[10], c[10]);
  printf("    ___________________________________________________________\n");
  printf("D  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", d[0], d[0], d[0], d[0], d[0], d[1], d[1], d[1], d[1], d[1], d[2], d[2], d[2], d[2], d[2], d[3], d[3], d[3], d[3], d[3], d[4], d[4], d[4], d[4], d[4], d[5], d[5], d[5], d[5], d[5], d[6], d[6], d[6], d[6], d[6], d[7], d[7], d[7], d[7], d[7], d[8], d[8], d[8], d[8], d[8], d[9], d[9], d[9], d[9], d[9], d[10], d[10], d[10], d[10], d[10]);
  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", d[0], d[0], d[0], d[0], d[0], d[1], d[1], d[1], d[1], d[1], d[2], d[2], d[2], d[2], d[2], d[3], d[3], d[3], d[3], d[3], d[4], d[4], d[4], d[4], d[4], d[5], d[5], d[5], d[5], d[5], d[6], d[6], d[6], d[6], d[6], d[7], d[7], d[7], d[7], d[7], d[8], d[8], d[8], d[8], d[8], d[9], d[9], d[9], d[9], d[9], d[10], d[10], d[10], d[10], d[10]);
  printf("    ___________________________________________________________\n");
  printf("E  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", e[0], e[0], e[0], e[0], e[0], e[1], e[1], e[1], e[1], e[1], e[2], e[2], e[2], e[2], e[2], e[3], e[3], e[3], e[3], e[3], e[4], e[4], e[4], e[4], e[4], e[5], e[5], e[5], e[5], e[5], e[6], e[6], e[6], e[6], e[6], e[7], e[7], e[7], e[7], e[7], e[8], e[8], e[8], e[8], e[8], e[9], e[9], e[9], e[9], e[9], e[10], e[10], e[10], e[10], e[10]);
  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", e[0], e[0], e[0], e[0], e[0], e[1], e[1], e[1], e[1], e[1], e[2], e[2], e[2], e[2], e[2], e[3], e[3], e[3], e[3], e[3], e[4], e[4], e[4], e[4], e[4], e[5], e[5], e[5], e[5], e[5], e[6], e[6], e[6], e[6], e[6], e[7], e[7], e[7], e[7], e[7], e[8], e[8], e[8], e[8], e[8], e[9], e[9], e[9], e[9], e[9], e[10], e[10], e[10], e[10], e[10]);
  printf("    ___________________________________________________________\n");
  printf("F  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", f[0], f[0], f[0], f[0], f[0], f[1], f[1], f[1], f[1], f[1], f[2], f[2], f[2], f[2], f[2], f[3], f[3], f[3], f[3], f[3], f[4], f[4], f[4], f[4], f[4], f[5], f[5], f[5], f[5], f[5], f[6], f[6], f[6], f[6], f[6], f[7], f[7], f[7], f[7], f[7], f[8], f[8], f[8], f[8], f[8], f[9], f[9], f[9], f[9], f[9], f[10], f[10], f[10], f[10], f[10]);
  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", f[0], f[0], f[0], f[0], f[0], f[1], f[1], f[1], f[1], f[1], f[2], f[2], f[2], f[2], f[2], f[3], f[3], f[3], f[3], f[3], f[4], f[4], f[4], f[4], f[4], f[5], f[5], f[5], f[5], f[5], f[6], f[6], f[6], f[6], f[6], f[7], f[7], f[7], f[7], f[7], f[8], f[8], f[8], f[8], f[8], f[9], f[9], f[9], f[9], f[9], f[10], f[10], f[10], f[10], f[10]);
  printf("    ___________________________________________________________\n");
  printf("G  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", g[0], g[0], g[0], g[0], g[0], g[1], g[1], g[1], g[1], g[1], g[2], g[2], g[2], g[2], g[2], g[3], g[3], g[3], g[3], g[3], g[4], g[4], g[4], g[4], g[4], g[5], g[5], g[5], g[5], g[5], g[6], g[6], g[6], g[6], g[6], g[7], g[7], g[7], g[7], g[7], g[8], g[8], g[8], g[8], g[8], g[9], g[9], g[9], g[9], g[9], g[10], g[10], g[10], g[10], g[10]);
  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", g[0], g[0], g[0], g[0], g[0], g[1], g[1], g[1], g[1], g[1], g[2], g[2], g[2], g[2], g[2], g[3], g[3], g[3], g[3], g[3], g[4], g[4], g[4], g[4], g[4], g[5], g[5], g[5], g[5], g[5], g[6], g[6], g[6], g[6], g[6], g[7], g[7], g[7], g[7], g[7], g[8], g[8], g[8], g[8], g[8], g[9], g[9], g[9], g[9], g[9], g[10], g[10], g[10], g[10], g[10]);
  printf("    ___________________________________________________________\n");
  printf("H  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", h[0], h[0], h[0], h[0], h[0], h[1], h[1], h[1], h[1], h[1], h[2], h[2], h[2], h[2], h[2], h[3], h[3], h[3], h[3], h[3], h[4], h[4], h[4], h[4], h[4], h[5], h[5], h[5], h[5], h[5], h[6], h[6], h[6], h[6], h[6], h[7], h[7], h[7], h[7], h[7], h[8], h[8], h[8], h[8], h[8], h[9], h[9], h[9], h[9], h[9], h[10], h[10], h[10], h[10], h[10]);
  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", h[0], h[0], h[0], h[0], h[0], h[1], h[1], h[1], h[1], h[1], h[2], h[2], h[2], h[2], h[2], h[3], h[3], h[3], h[3], h[3], h[4], h[4], h[4], h[4], h[4], h[5], h[5], h[5], h[5], h[5], h[6], h[6], h[6], h[6], h[6], h[7], h[7], h[7], h[7], h[7], h[8], h[8], h[8], h[8], h[8], h[9], h[9], h[9], h[9], h[9], h[10], h[10], h[10], h[10], h[10]);
  printf("    ___________________________________________________________\n");
  printf("I  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", i[0], i[0], i[0], i[0], i[0], i[1], i[1], i[1], i[1], i[1], i[2], i[2], i[2], i[2], i[2], i[3], i[3], i[3], i[3], i[3], i[4], i[4], i[4], i[4], i[4], i[5], i[5], i[5], i[5], i[5], i[6], i[6], i[6], i[6], i[6], i[7], i[7], i[7], i[7], i[7], i[8], i[8], i[8], i[8], i[8], i[9], i[9], i[9], i[9], i[9], i[10], i[10], i[10], i[10], i[10]);
  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", i[0], i[0], i[0], i[0], i[0], i[1], i[1], i[1], i[1], i[1], i[2], i[2], i[2], i[2], i[2], i[3], i[3], i[3], i[3], i[3], i[4], i[4], i[4], i[4], i[4], i[5], i[5], i[5], i[5], i[5], i[6], i[6], i[6], i[6], i[6], i[7], i[7], i[7], i[7], i[7], i[8], i[8], i[8], i[8], i[8], i[9], i[9], i[9], i[9], i[9], i[10], i[10], i[10], i[10], i[10]);
  printf("    ___________________________________________________________\n");
  printf("J  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", j[0], j[0], j[0], j[0], j[0], j[1], j[1], j[1], j[1], j[1], j[2], j[2], j[2], j[2], j[2], j[3], j[3], j[3], j[3], j[3], j[4], j[4], j[4], j[4], j[4], j[5], j[5], j[5], j[5], j[5], j[6], j[6], j[6], j[6], j[6], j[7], j[7], j[7], j[7], j[7], j[8], j[8], j[8], j[8], j[8], j[9], j[9], j[9], j[9], j[9], j[10], j[10], j[10], j[10], j[10]);
  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", j[0], j[0], j[0], j[0], j[0], j[1], j[1], j[1], j[1], j[1], j[2], j[2], j[2], j[2], j[2], j[3], j[3], j[3], j[3], j[3], j[4], j[4], j[4], j[4], j[4], j[5], j[5], j[5], j[5], j[5], j[6], j[6], j[6], j[6], j[6], j[7], j[7], j[7], j[7], j[7], j[8], j[8], j[8], j[8], j[8], j[9], j[9], j[9], j[9], j[9], j[10], j[10], j[10], j[10], j[10]);
  printf("    ___________________________________________________________\n");
  //these below are errors, just incase an invalid number is called
    if (input_int>=10)
  printf("please enter valid number");
    if (input_char!='a'&&input_char!='b'&&input_char!='c'&&input_char!='d'&&input_char!='e'&&input_char!='f'&&input_char!='g'&&input_char!='h'&&input_char!='i'&&input_char!='j')
  printf("please enter a valid letter");
}


void change_space(char input_char, int input_int)
{

  if (input_char=='a')
   a[input_int]='X';
    
    if (input_char=='b')
     b[input_int]='X';
  
    if (input_char=='c')
   c[input_int]='X';
  
    if (input_char=='d')
    d[input_int]='X';
  
    if (input_char=='e')
    e[input_int]='X';
  
    if (input_char=='f')
    f[input_int]='X';
  
    if (input_char=='g')
    g[input_int]='X';
  
    if (input_char=='h')
     h[input_int]='X';
  
    if (input_char=='i')
     i[input_int]='p';
  
    if (input_char=='j')
     j[input_int]='X';

  
}

int main()
{
int input_int;
char input_char;
initialize_arrays();
print_screen(input_char, input_int);
printf("Input the row of letters that you'd like to chance to 'x'");
scanf("%c", &input_char);
printf("Input the number of the box that you'd like to change to 'x'");
scanf("%d", &input_int);
input_int=input_int-1;//BECAUSE OF ARRAYS
change_space(input_char, input_int);
print_screen(input_char, input_int);

return 0;
}//end of main function
