#ifndef OPTS_H_
#define OPTS_H_

#define AUTHOR "Neil Gonzalez"
#define LICENSE "GPL v2"
#define VERSION "1.0.0"

void print_version() { printf("%s\n", VERSION);}

void print_author() { printf("%s\n", AUTHOR);}

void print_license() { printf("%s\n", LICENSE);}

int compare(char* argv, char* argv2) { return (strcmp(argv, argv2) == 0) ? 1 : 0;}

void target_flags(int argc, const char* argv[], FILE* ptr1, FILE* ptr2) { 
    for(int i = 0; i < argc; i++) { 
        //-v version
        if (compare(argv[i], "-v")) { 
            print_version();
            print_author();
            print_license();
            return;
        }
        //-q difference
        else if(compare(argv[i], "-q") { 
            if (different(ptr1, ptr2)) { 
                printf("files are different...\n");
                return;
            }

        }
        //-s identical
        else if (compare(argv[i], "-s")) { 
            if(same(ptr1, ptr2)) { 
                printf("files are similar...\n");
                return;
            }
        }

        //-y side by side 
        else if (compare(argv[i], "-y")){ 

        }

        //-l left column
        else if (compare(argv[i], "-l")) { 

        }

        //-cl common lines
        else if (compare(argv[i], "-cl")) {

        }

        else if (strcmp(argv[i], "-c")) { 
            printf("num lines option\n");
        }
        else if(strcmp(argv[i], "-u")) { 
            printf("num lines option\n")
        }
    }


}





#endif