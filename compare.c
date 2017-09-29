#include <stdio.h>
#include <stdlib.h>

#include <string.h>

/*
int strcmp(const char *s1, const char *s2);
   compares strings s1 and s2
   if s1 is greater than s2, a positive integer will be returned 
   if s1 is equal to s2, 0 is returned, etc....
   similar to compareTo() in java

int strncmp(const char *s1, const char *s2, size_t n);
   same thing as strcmp, but it only looks at the first n bytes of s1 and s2 at most
*/

int main(){

  printf("strcmp:\n");
  
  char *s1 = "abc";
  char *s2 = "def";
 
  printf("s1:abc, s2:def --> %d\n", strcmp(s1, s2));
  printf("s1:def, s2:abc --> %d\n", strcmp(s2, s1));

  char *s3 = "abc";
  printf("s1:abc, s2:abc --> %d\n", strcmp(s1, s3));

  
  printf("\nstrncmp:\n");
  
  char *s4 = "abcdef";
  printf("s1:abc, s2:abcdef, size:3 --> %d\n", strncmp(s1, s4, 3));
  printf("s1:abc, s2:abcdef, size:4 --> %d\n", strncmp(s1, s4, 4));
  printf("s1:abc, s2:abcdef, size:6 --> %d\n", strncmp(s1, s4, 6));

  printf("\ns1:abc, s2:abc, size:6 --> %d\n", strncmp(s1, s3, 6));
}
