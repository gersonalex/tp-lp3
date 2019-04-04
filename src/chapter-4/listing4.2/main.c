#include <pthread.h>
#include <stdio.h>

struct char_print_params
{
	char character;
	int count;
};

void* char_print(void* parameters)
{
	struct char_print_parms* p = (struct char_print_parms*) parameters;
	int i;

	for (int i = 0; i < p->count; ++i)
	{
		fputc(p->character, stderr);
	}
	return NULL;
}

int main(int argc, char const *argv[])
{
	pthread_t pthread1_id;
	pthread_t pthread2_id;
	struct char_print_parms thread1_args;
	struct char_print_parms thread2_args;

	thread1_args.character = 'x';
	thread1_args.count = 30000;
	pthread_create(&thread1_id, NULL, &char_print, &thread1_args);

	thread2_args.character = 'o';
	thread2_args.count = 20000;
	pthread_create(&thread2_id, NULL, &char_print, &thread2_args);

	return 0;
}