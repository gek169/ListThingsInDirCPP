#include <string>
#include <iostream>
#include <stdio.h>
#include <dirent.h>

int main(int argc, char** argv)
{
	if(argc < 2)
		return 1;
    DIR *dir;
	struct dirent *ent;
	if ((dir = opendir (argv[1])) != NULL) {
	  /* print all the files and directories within directory */
	  while ((ent = readdir (dir)) != NULL) {
		printf ("%s\n", ent->d_name);
	  }
	  closedir (dir);
	} else {
	  /* could not open directory */
	  perror ("");
	  return EXIT_FAILURE;
	}
}
