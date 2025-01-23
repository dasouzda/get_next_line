#include "get_next_line.h"

// main 1

// int	main(void)
// {
// 	int fd = open("text_de_test.txt", O_RDONLY);

// 	char *line = get_next_line(fd);
// 	printf("%s", line);

// 	char *line2 = get_next_line(fd);
// 	printf("%s", line2);

// 	char *line3 = get_next_line(fd);
// 	printf("%s", line3);

// 	char *line4 = get_next_line(fd);
// 	printf("%s", line4);

// 	char *line5 = get_next_line(fd);
// 	printf("%s", line5);

// 	close(fd);
// 	return (0);
// }

//main 2

    // int     main(void)
    // {
    //     char *line;
    //     int fd = open("text_de_test.txt", O_RDONLY);

        
        
    //     while(1)
    //     {
    //         line = get_next_line(fd);
    //         if (!line)
    //             break;
    //         printf("%s", line);
    //         free(line);
    //     }
    //	close(fd);
    //     return(0);
    // }

//main 3
    // int main(int ac, char **av)
// {
//     char *line;
//     int fd = open(av[1], O_RDONLY);

//     while ((line = get_next_line(fd)) != NULL)
//     {
//         printf("%s", line);
//         free(line);
//     }
//	close(fd);
// }

//main pour les bonus

int	main(void)
{
	int fd = open("text_de_test.txt", O_RDONLY);
	int fd_bis = open("test_thomas.txt", O_RDONLY);

	char *line = get_next_line(fd);
	printf("%s", line);

    char *line_bis = get_next_line(fd_bis);
    printf("%s", line_bis); 

	char *line2 = get_next_line(fd);
	printf("%s", line2);

    char *line2_bis = get_next_line(fd_bis);
	printf("%s", line2_bis);

	// char *line3 = get_next_line(fd);
	// printf("%s", line3);

	// char *line4 = get_next_line(fd);
	// printf("%s", line4);

	// char *line5 = get_next_line(fd);
	// printf("%s", line5);

	close(fd);
	return (0);
}