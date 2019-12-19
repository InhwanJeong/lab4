//
// Created by tt on 19. 12. 15..
//

#include <stdio.h>
#include <stdlib.h>
#include <mysql.h>

#define CREATE 2
#define READ 1
#define UPDATE 3
#define DELETE 4
#define QUIT 5

int id = 0;
char name[20];
char phone_num[20];
char address[20];
char buffer[100];

MYSQL mysql;
MYSQL_RES* res;

int i, fields, user_select = 0;

MYSQL_ROW row;

void input_data(){
    printf("ID : ");
    scanf("%d", &id);
    printf("NAME : ");
    scanf("%s", name);
    printf("PHONE-NUMBER : ");
    scanf("%s", phone_num);
    printf("ADDRESS : ");
    scanf("%s", address);
}


void run(){
    mysql_init(&mysql);

    if (!mysql_real_connect(&mysql, "localhost", "root", "1234", NULL, 0, (char *) NULL, 0)) {
        printf("Error %d: %s\n", mysql_errno(&mysql), mysql_error(&mysql));
        exit(1);
    }

    if (mysql_query(&mysql, "use people")) {
        printf("Error %d: %s\n", mysql_errno(&mysql), mysql_error(&mysql));
        exit(1);
    }

    printf("데이터베이스 프로그램입니다.");
    while (user_select != QUIT) {
        printf("\n원하시는 기능을 선택해 주세요!");
        printf("\n\t1. 조회\n\t2. 삽입\n\t3. 수정\n\t4. 삭제\n\t5. 종료\n");
        printf("Input > ");

        scanf("%d", &user_select);

        switch (user_select){
            case READ:
                if (mysql_query(&mysql, "select * from people")) {
                    printf("Error %d: %s\n", mysql_errno(&mysql), mysql_error(&mysql));
                    exit(1);
                } else
                    printf("조회가 완료되었습니다.\n");
                res = mysql_use_result(&mysql);
                fields = mysql_num_fields(res);
                printf("Total student is as follows.\n");
                while ((row = mysql_fetch_row(res))) {
                    for (i = 0; i < fields; ++i) {
                        printf("%12s ", row[i]);
                    }
                    printf("\n");
                }
                mysql_free_result(res);
                break;

            case CREATE:
                input_data();
                sprintf(buffer, "insert into people values(%d, \"%s\",\"%s\",\"%s\");", id, name, phone_num, address);

                if (mysql_query(&mysql, buffer)) {
                    printf("Error %d: %s\n", mysql_errno(&mysql), mysql_error(&mysql));
                    exit(1);
                }
                printf("생성이 완료되었습니다.\n");
                break;

            case DELETE:
                printf("삭제할 ID를 입력해 주세요!\n");
                printf("ID : ");
                scanf("%d", &id);
                sprintf(buffer, "delete from people where id = %d", id);
                if (mysql_query(&mysql, buffer)) {
                    printf("Error %d: %s\n", mysql_errno(&mysql), mysql_error(&mysql));
                    exit(1);
                }
                printf("삭제가 완료되었습니다.\n");
                break;

            case UPDATE:
                input_data();
                sprintf(buffer, "update people set name=\'%s\',phonenum=\'%s\',address=\'%s\' where id=%d", name, phone_num, address, id);
                if (mysql_query(&mysql, buffer)) {
                    printf("Error %d: %s\n", mysql_errno(&mysql),  mysql_error(&mysql));
                    exit(1);
                }
                break;

            case QUIT:
                printf("\n 이용해주셔서 감사합니다. 안녕히 가세요!");
                mysql_close(&mysql);
                exit(1);
        }
    }
}

void main() {
    run();
}
