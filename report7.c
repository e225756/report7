#include <stdio.h>

void a_List(int list[], int size) {
  printf("scores = ");
  for(int i=0; i<size; i++) {
      printf("%d ", list[i]);
  }
  printf("\n");
}

void b_List(int list[], int size) {
  printf("results = ");
  for(int i=0; i<size-1; i++) {
      for(int j=i+1; j<size; j++) {
          if(list[i] < list[j]) {
              int k;
              k = list[i];
              list[i] = list[j];
              list[j] = k;
          }
      }
  }
  for (int l=0; l<size; l++) {
      printf("%d ", list[l]);
  }
}

int main() {
  const int SIZE = 6;
  int scores[] = {100, 60, 70, 100, 90, 80};

  a_List(scores, SIZE);
  b_List(scores, SIZE);
  return 0;
}
