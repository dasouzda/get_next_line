#include "get_next_line.h"


int main(void)
{
    char *line;
    int fd = open("read_error.txt", O_RDONLY);

    while (1)
    {
        line = get_next_line(fd);
        if (!line)
            break;
        printf("%s", line);
        free(line);
    }
}


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
    //     return(0);
    // }




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