# Lecture 3

## Creating a Matrix Dynamically
```c
int** mat;

```

___
## Structs

Similar data can groups into structs
```c
struct list{
  int ruid;
  float score;
  struct list* ptr; //Needs to be pointer
};
```

### Declaration

```c
int main(int count, char** arr){
  struct list* temp;
  temp = (struct list*) malloc(sizeof(struct list));

  temp-> ruid = 1114;//this is how you access data
                     //without dereferencing the pointer
  (*temp).ruid = 123; // Same thing

  int i;
  int num;
  struct list* head = NULL;

  //Making a list!!
  for(i=0; i < 2; i++){
    scanf("%d\n", &num);
    temp = (struct list*) malloc(sizeof(struct list));
    temp -> ruid = num;
    temp -> score = 0.0;

    temp -> ptr = head;
    head = temp;

  }

  // Freeing a list!!!
  while(head != NULL){
    temp = head;
    head = temp -> ptr;
    free(temp);
  }
}
```
