#include <stdio.h>
#include <stdlib.h>

void printLetter(char *letter);
void isEmpty(FILE *f);

int main(int argc, char **argv) {
    FILE *input = fopen(argv[1], "r");
    char buffer[40];

    isEmpty(input);
    
    fgets(buffer, 40, input);

    int i;
    for(i = 0; i < 40; i++) {
	printLetter(&buffer[i]);
    }
    printf("\n");

    fclose(input);

    return 0;
}

void printLetter(char *letter) {
   
    switch(*letter) {
	case 'a':
	case 'A':
	    printf("z");
	    break;
	case 'b':
	case 'B':
	    printf("y");
	    break;
	case 'c':
	case 'C':
	    printf("x");
	    break;
	case 'd':
	case 'D':
	    printf("w");
	    break;
	case 'e':
	case 'E':
	    printf("v");
	    break;
	case 'f':
	case 'F':
	    printf("u");
	    break;
	case 'g':
	case 'G':
	    printf("t");
	    break;
	case 'h':
	case 'H':
	    printf("s");
	    break;
	case 'i':
	case 'I':
	    printf("r");
	    break;
	case 'j':
	case 'J':
	    printf("q");
	    break;
	case 'k':
	case 'K':
	    printf("p");
	    break;
	case 'l':
	case 'L':
	    printf("o");
	    break;
	case 'm':
	case 'M':
	    printf("n");
	    break;
	case 'n':
	case 'N':
	    printf("m");
	    break;
	case 'o':
	case 'O':
	    printf("l");
	    break;
	case 'p':
	case 'P':
	    printf("k");
	    break;
	case 'q':
	case 'Q':
	    printf("j");
	    break;
	case 'r':
	case 'R':
	    printf("i");
	    break;
	case 's':
	case 'S':
	    printf("h");
	    break;
	case 't':
	case 'T':
	    printf("g");
	    break;
	case 'u':
	case 'U':
	    printf("f");
	    break;
	case 'v':
	case 'V':
	    printf("e");
	    break;
	case 'w':
	case 'W':
	    printf("d");
	    break;
	case 'x':
	case 'X':
	    printf("c");
	    break;
	case 'y':
	case 'Y':
	    printf("b");
	    break;
	case 'z':
	case 'Z':
	    printf("a");
	    break;
	default:
	    printf("%c", *letter);
	    break;
    }
}

void isEmpty(FILE *f) {

    if(f == NULL) {
	printf("uh empty\n");
	exit(1);
    }
}
