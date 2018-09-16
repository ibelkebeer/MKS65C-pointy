#include <stdio.h>
int main(){
  unsigned int num = 998773934448;
  char* pointy = &num;
  printf("%x\n%u\n",num,num);
  printf("%hhx\n",*pointy);
  int i;
  for(i = 0; i < 3; i++){
    pointy++;
    printf("%hhx\n",*pointy);
  }
  *pointy += 1;
  for(i = 0; i < 3; i++){
    pointy--;
    *pointy += 1;
  }
  printf("%x\n%u\n",num,num);
  *pointy += 16;
  for(i = 0; i < 3; i++){
    pointy++;
    *pointy += 16;
  }
  printf("%x\n%u\n",num,num);
  return 0;
}
