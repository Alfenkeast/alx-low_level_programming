#ifdef _main_h
#define _main_h
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
void simple_print_buffer(char *buffer, unsigned int size)
#endif
