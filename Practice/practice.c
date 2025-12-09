#include <stdio.h>
#include<string.h>
int main() {
  char name[50],course[50];
  int max = 0;
  int freq[256]={0};
  char maxChar;
  printf("Enter name:");
  gets(name);
  printf("Enter course:");
  gets(course);
  strcat(name,course);
  for(int i=0; name[i]!='\0';i++){
      unsigned char ch = name[i];
      if(ch != ' ' && ch != '\n'){
          freq[ch]++;
          if(freq[ch]>max){
              max = freq[ch];
              maxChar = ch;
          }
      }
  }
  printf("Character with maximum frequency is %c (%d times)",maxChar,max);
  

    return 0;
}