#include <stdio.h> 
#include <stdlib.h> 
#include <mysql.h> 
displayresult(MYSQL *mysql, char *condition) 
{ 
	char query[80]; 
	MYSQL_RES* res; 
	MYSQL_ROW row; 
	int i, fields; 
	sprintf(query, "select * from student"); 
	if (mysql_query(mysql, query)) { 
		printf("MySQL Error %d: %s\n", 
				mysql_errno(mysql), mysql_error(mysql)); 
		exit(1); 
	} 
	res = mysql_use_result(mysql); 
	fields = mysql_num_fields(res); 
	while ((row = mysql_fetch_row(res))) { 
		for (i = 0; i < fields; ++i) { 
			printf("%12s ", row[i]); 
		} 
		printf("\n"); 
	} 
	mysql_free_result(res); 
} 

int main() 
{ 
	MYSQL mysql; 
	MYSQL_RES* res; 
	MYSQL_ROW row; 
	int i, fields; 
	mysql_init(&mysql); 
	char choice;
	// db_connect

	while(1){
		if (!mysql_real_connect(&mysql, "localhost", "root", "1234", "test", 0, (char *)NULL, 0)) { 
			printf("MySQL Error %d: %s\n", mysql_errno(&mysql), mysql_error(&mysql)); 
			exit(1); 
		}

		printf("1.Lookup  2.insert  3.delete  4. update\n");
		scanf("%c", &choice);

		switch(choice){
			case'1':
				displayresult(&mysql, "gender='M'");
				break;

			case'2':
				break;

				case'3':

				break;

				case'4':

				break;

		}

							mysql_close(&mysql); 
		}
		return 0; 
	} 
