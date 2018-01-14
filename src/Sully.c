#include <stdio.h>
#define Q(x)char *c=#x;x
Q(int main(){FILE *fp;int i = 5;char *name = {"Sully_X.c"};name[6] = i;fp = fopen(name, "w+");fprintf(fp,"#include <stdio.h>\n#define Q(x)char *c=#x;x\nQ(%s)",c);fclose(fp);if (fork() == (t_pid)0){execve(???);}return (0);})
