#include <pthread.h>
void *hello_thread (void *arg){
	printf ("Thread: Hello, World!\n");
	return arg;
}
main(){
	pthread_t tid;
	int status;
	/* 쓰레드 생성 */
	status = pthread_create (&tid, NULL, hello_thread, NULL);
	if (status != 0)
		perror ("Create thread");
	pthread_exit (NULL);
}
