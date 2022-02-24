#include <stdio.h>
int main() {

  int i, n;

  int t1 = 0, t2 = 1;
  int arr[100] = {0, 1};

  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print 3rd to nth terms
  for (i = 2; i <= n; ++i) {
        arr[i] = nextTerm;
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
  }
  
  int it;
  for(it = 0; it < n; it++) {
      if(arr[it] % 2 == 0) {
          printf("%d = even \n", arr[it]);
      }
      else {
          printf("%d = odd \n", arr[it]);
      }
  }

  return 0;
}
