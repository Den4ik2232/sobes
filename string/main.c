#include"stroki.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *str = "Hello!";
	char symb = 'e';
	char symb2 = 'p';
	int index = str_chr(str, symb);
	printf("%d\n", index);
	index = str_chr(str, symb2);
        printf("%d\n", index);
	char *stroka1 = "efaeeeeceeeefdefhijef";
	char *stroka2 = "efg";
	int index2 = str_str(stroka1, stroka2);
	printf("%d\n", index2);
	char str1[] = "hello world!!";
	printf("before - %s\n", str1);
	change_symb(str1, 'w', '5');
	printf("after - %s\n", str1);
	printf("%d\n", str_len(str1));
	char *str5 = change_symb_to_str("hello world!!!", 'e', "555");
	printf("%s\n", str5);
	
	return 0;

}
