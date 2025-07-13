#include"stroki.h"

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

//find symb in str
int str_chr(char *str, char symb){
	if(str == NULL) return -1;
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == symb)
			return i;
	}
	return -1;
}
// find str2 in str1
int str_str(char *str1, char *str2){
	if((str1 == NULL) || (str2 == NULL)) return -1;
	int i;
	int j;
	for(i = 0; str1[i] != '\0'; i++){
		for(j = 0; (str2[j] != '\0') && (str1[i + j] != '\0'); j++){
			if(str1[i + j] != str2[j])
				break;
		}
		if(str2[j] == '\0')
			return i;
	}
	return -1;
} 
//change a to b in str
int change_symb(char *str, char a, char b){
	if(str == NULL) return -1;
	int index = str_chr(str, a);
	if(index != -1){ 
		str[index] = b;
		return 0;
	}
	return -1;
}

int str_len(char *str){
	if(str == NULL) return -1;
	int len = 0;
	for(int i = 0; str[i] != '\0'; i++){
		len++;
	}
	return len;
}
//change a to str2 in str1
char *change_symb_to_str(char *str1, char a, char *str2){
	int len = str_len(str1) + str_len(str2) + 1;
	char *str = malloc(len);
	int index = str_chr(str1, a);
	if(index == -1) return NULL;
	for(int i = 0; i < str_len(str1); i++){
		if(i == index){
			for(int j = 0; j < str_len(str2); j++){
				str[i + j] = str2[j];
			}
		}
		if(i < index){
			str[i] = str1[i];
		}
		if(i > index){
			str[i + str_len(str2) - 1] = str1[i];
		}
	}
	str[len] = '\0';
	return str;
}
