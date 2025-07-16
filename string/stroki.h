#ifndef STROKI_H
#define STROKI_H

//find symb in str
int str_chr(char *str, char symb); 
// find str2 in str1
int str_str(char *str1, char *str2);
//change a to b in str
int str_len(char *str);
int change_symb(char *str, char a, char b);
//change a to str2 in str1
char *change_symb_to_str(char *str1, char a, char *str2);

#endif //STROKI_H
