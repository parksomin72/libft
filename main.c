#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "libft.h"

int main()
{
	int fd = open("file.txt", O_WRONLY | O_CREAT);
	if (fd == -1)
		exit (1);
	ft_putchar_fd('a', fd);
	close(fd);
}
