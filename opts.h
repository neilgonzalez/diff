#ifndef OPTS_H_
#define OPTS_H_

#define AUTHOR "Neil Gonzalez"
#define LICENSE "GPL v2"
#define VERSION "1.0.0"

void print_version() { 
    printf("%s\n", VERSION);
}

void print_author() { 
    printf("%s\n", AUTHOR);
}

void print_license() { 
    printf("%s\n", LICENSE);
}
void target_flags(int argc, const char* argv[]) { 
    for(int i = 0; i < argc; i++) { 
        if (strcmp(argv[i], "-v") == 0) { 
            print_version();
            print_author();
            print_license();
        }
        else if(strcmp(argv[i], "-q") == 0) { 
            if 
        }
    }


}





#endif