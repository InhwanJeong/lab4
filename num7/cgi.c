#include<stdio.h>
void main()
{
    printf("Content-type: text/html\n\n");
    printf("<H1><BIG>Hello CGI World!!!</BIG></H1><P>\n");
    printf("<B>%s</B>", getenv("QUERY_STRING"));
}
