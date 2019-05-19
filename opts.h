#ifndef OPTS_H_
#define OPTS_H_

#define AUTHOR "Neil Gonzalez"
#define LICENSE "GPL v2"
#define VERSION "1.0.0"

void print_version() { printf("%s\n", VERSION);}

void print_author() { printf("%s\n", AUTHOR);}

void print_license() { printf("%s\n", LICENSE);}

int compare(const char* argv, char* argv2) { return (strcmp(argv, argv2) == 0) ? 1 : 0;}

int target_flags(int argc, const char* argv[], FILE* ptr1, FILE* ptr2) { 
    for(int i = 0; i < argc; i++) { 
        //-v version
        if (compare(argv[i], "-v")) { 
            print_version();
            print_author();
            print_license();
            return 1;
        }
        //-q difference
        else if(compare(argv[i], "-q")) { 
            if (different(ptr1, ptr2)) { 
                printf("files are different...\n");
                return 2;
            }
         
        }
        //-s identical
        else if (compare(argv[i], "-s")) { 
            if(same(ptr1, ptr2)) { 
                printf("files are similar...\n");
                return 3;
            }
        
        }

        else if (compare(argv[i], "-s") && compare(argv[i], "-q")) { 
            if (same(ptr1, ptr2)) { 
                printf("files are the same...\n");
                return 4;
            }else { 
                printf("files are different\n");
                return 4;
            }
        }

        //-y side by side unless --suppress-common-lines is set
        //then it shows onyl arrow paras
        //'\' for lines different in common paras
        else if (compare(argv[i], "-y")){ 
            
            if (compare(argv[i], "--suppress-common-lines")) { 

                return 6;
            }
            else if (compare(argv[i], "--side-by-side")) { 
                return 5;
            }
            else if(compare(argv[i], "--left-column")) { 
                return 7;
            }
           
        }

        else if (compare(argv[i], "-h")) { 
            usageBanner();
        }
    }

return 0;
}





#endif