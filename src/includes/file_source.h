#define DIR_SOURCE "/etc/apt/sources.list"
#define MIRRORS_APT_DIR "/etc/apt/sources.list"
#define IN_COMMAND "deb https://ppa.launchpadcontent.net/"

#include<stdio.h>
#include<string.h>

FILE* open_file(char* file_name);

int modify_file(FILE* file, char* char_modify);