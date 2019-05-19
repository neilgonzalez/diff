//contains functions that report files are similar or diffferent

int same(FILE* ptr1, FILE* ptr2) { 
    int char1, char2;
    while (char1 != EOF && char2 != EOF) { 
        char1 = fgetc(ptr1);
        char2 = fgetc(ptr2);
        if (char1 != char2) { 
            return 0;
        }
    }
    return 1;
}

int different(FILE* ptr1, FILE* ptr2) { 
    int char1, char2;
    while (char1 != EOF && char2 != EOF) { 
        char1 = fgetc(ptr1);
        char2 = fgetc(ptr2);
        if (char1 != char2) { 
            return 1;
        }
    }
    return 0;
}

//functions for lines operations
//takes two arrays with lines and prints the selected output
int compare_lines(const void* lines1, const void* lines2){ 
    return memcmp(lines1, lines2, sizeof(lines1));
     }

//provided a common paragraph, print the different lines in it
void diff_lines_common_para(para* para1, para* para2) { 
    
}