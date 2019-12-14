#include <stdio.h> 
#include <stdlib.h> 
#include <mysql.h> 
int main() 
{ 
    MYSQL mysql; 
    mysql_init(&mysql); 
    if (!mysql_real_connect(&mysql, "localhost", "root", "1234", NULL, 0, (char *)NULL, 0)) { 
        printf("Error %d: %s\n", mysql_errno(&mysql), mysql_error(&mysql)); 
        exit(1); 
    }
    if (mysql_query(&mysql, "use test")) { 
        printf("Error %d: %s\n", mysql_errno(&mysql), mysql_error(&mysql)); 
        exit(1); 
    } 
    if (mysql_query(&mysql, "update student set birth='95.01.04' where id<=2")) { 
        printf("Error %d: %s\n", mysql_errno(&mysql), mysql_error(&mysql)); 
        exit(1); 
    } 
    printf("query info: %s\n", mysql_info(&mysql)); 
    printf("affected rows: %lu\n", (unsigned long) mysql_affected_rows(&mysql));
    mysql_close(&mysql); 
    return 0; 
}
