#include<stdio.h>
int main(){
    char ch;
    printf("Enter a small alphabet: \n");
    scanf("%c", &ch);
    printf("You entered: %c\n", ch);
if(ch == 'a' || ch == 'e' || ch == 'u' || ch == 'o' || ch == 'i'){
    printf("This is vowel!\n");
}else{
    printf("This is consonant!");
}
return 0;
}
