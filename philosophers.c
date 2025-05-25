#include "philosophers.h"

void *hello(void *args)
{
	args = 2;
	return (NULL);
}

int main(int ac, char **av)
{
	(void)av;
	// struct timeval tv;
	pthread_t thread;
	int i = 0;
	
	if (ac > 5)
	{
		write (2, "too many arguments\n", 19);
		return (0);
	}
	pthread_create(&thread, NULL, hello, &i);
	i = 1;
	pthread_join(thread, NULL);
	printf("%d\n", i);
	// gettimeofday(&tv, NULL);
	// printf("%ld\n", tv.tv_sec);
}