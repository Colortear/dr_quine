#include <stdio.h>
#define Q(x)char *c=#x;x
/*ze real shit*/Q(int main(){FILE *fp;fp = fopen("Grace_kid.c", "w+");fprintf(fp,"#include <stdio.h>\n#define Q(x)char *c=#x;x\n/*ze real shit*/Q(%s)",c);fclose(fp);return (0);})