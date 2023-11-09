#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
  FILE* fp;
  char c;
  
  fp = fopen("sample.txt","r");
  if (fp == NULL)
  {
     printf("falled to open\n");
     return 0;
  }
  
  while( (c=fgetc(fp)) != EOF) //한 글자 읽은게 마지막이 아니면 
  {
         putchar(c); // 한 글자 출력  
  }
  
  fclose(fp);
  
  
  
  system("PAUSE");	
  return 0;
}
