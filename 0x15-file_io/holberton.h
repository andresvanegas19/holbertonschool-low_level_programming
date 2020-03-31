#ifndef MY_HEADER_FILE_H
#define MY_HEADER_FILE_H

/*library*/
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

/*prototype*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
