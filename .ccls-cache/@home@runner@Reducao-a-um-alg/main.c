#include <stdio.h>

int digital_root(int n) {
  if(n < 10){
    return n;
  }
  else{
    return digital_root(n%10+n/10);
  }
}

int main(void) {
  int n,sum=0;
  printf("N: ?");
  scanf("%d",&n);
  digital_root(n);
  printf("%d",digital_root(n));
  
  return 0;
}