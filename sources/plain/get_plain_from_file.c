
#include <fdf.h>

t_plain					*get_plain_from_file(char *file_name)
{
	t_plain				*plain;
	int					fd;

	if ((plain = get_plain(NULL, 0, 0)))
	{
		fd = open_file(file_name, FILE_READ);
		plain = parse_plain(plain, fd);
		if (plain != NULL && plain->points != NULL)
			ft_lstrev(&(plain->points));
		if (fd != -1)
			close_file(fd);
	}
	return (plain);
}
