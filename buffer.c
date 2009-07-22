#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void a();
void b(char *input, int input_size);
void c();
void d();

const int size = 44;

void _start()
{
  a();
  exit(0);
}

void a()
{
  char input[] =
"\x11\x11\x11\x11\x22\x22\x22\x22\x33\x33\x33\x33\x44\x44\x44\x44"
    "\x55\x55\x55\x55\x66\x66\x66\x66\x77\x77\x77\x77\x88\x88\x88\x88"
    "\x20\x00\x00\x00\x00\x00\x00\x00\x65\x82\x04\x08";
  b(input, size);
  c();
}

void b(char *input, int input_size)
{
  char copied_input[32];


  int k;
  for (k=0;k<input_size;k++)
    copied_input[k] = input[k];
}

void c()
{
  printf("c() has been called.\n");
}

void d()
{
  printf("This should never be called.\n");
  exit(0);
}
