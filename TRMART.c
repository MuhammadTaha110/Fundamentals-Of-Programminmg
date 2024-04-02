#include <stdio.h>
#include <ctype.h>


struct charstats
{
    char line[150];
    char ch;
    int count;
    int position[4];
    int temp;
};
 struct charinfo
 {
    int vowels;
    int words;
    int sortedvowels; 
    int space;
 };

 int main(){
  struct charstats input;
  struct charinfo info;
  
  printf("Enter A Line Of String: ");
  fgets(input.line, sizeof(input.line),stdin);

  for (int  i = 0; input.line[i] != '\0'; ++i)
  {
    input.line[i]=tolower input.line[i];
    if(input.line=='a' || input.line =='e' || input.line=='i'|| input.line=='o' || input.line=='u'){
        ++info.vowels;
        for (int j = 0; input.line[j]; j++)
        {
         for (int k = 0; input.line[k]; k++)
         {
            if (input.line[j]>input.line[k]){
                temp=input.line[j];
                input.line[j]=input.line[k];
                input.line[k]=temp;
            }
         }
         
        }
        
    }
    if(input.line==' '){
        ++info.space;
    } 
  }

   printf("Vowels After SOrting\n");
for (int i = 0; input.line[i] !='\0'; i++)
{
    printf("%c\n",input.line[i]);
}



  printf("%d are vowels \n",info.vowels);
  printf("%d are space \n",info.space);
  



 }