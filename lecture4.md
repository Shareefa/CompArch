# Random Questions

## How to File I/O
1. Include stdio.h
1. Get File name from argv
1. Use `fscanf()` to read

```c
#include <stdio.h>
#include <stdlib.h>

struct node{
  char ch;
  struct* node temp;
};

int main(int argc, charr** argv){
  if(argc < 2){
    exit(0);
  }

  char* filename = argv[1];

  FILE* fp;

  char ch;
  int num;


  fp = fopen(filename, "r");
  while(fscanf(fp, "%c %d\n", &ch, &num) != EOF){
    printf("%c %d\n", ch, num);
    temp = (struct node*) malloc(sizeof(struct node));
    temp ->ch = ch;
    temp->next= NULL;

    temp->next = start;
    start = temp;

  }

  fclose(fp);

  return 0;
}

```
