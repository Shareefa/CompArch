#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct node{
  int num;
  struct node* next;

};

int main(int argc, char** argv) {
  if(argc < 2){
    printf("error");
    return 0;
  }

  FILE* fp;
  fp = fopen( argv[1], "r");
  if(fp == NULL){
    printf("error");
    return 0;
  }

  char ch, tabch;
  char* tab;
  char rtab = "\t";
  char* rtabp = &rtab;
  int num;

  ch = fgetc(fp);
  tabch = fgetc(fp);
  tab = &tabch;

  fscanf(fp, "%d\n", &num);
  printf("%c%d\n",tabch, num);

  if (strcmp(tab, rtabp) != 0) {
    printf("NOT A TAB\n" );
    return 0;
  }

  while(fscanf(fp, "%c\t%d\n", &ch, &num) == 2){


    printf("%d", num);

    // if(ch != "d" && ch != 'i'){
    //   printf("error");
    //   return 0
    // }

  }


  return 0;
}
