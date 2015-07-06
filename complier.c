#include <stdio.h>
#include "scanner.h"
#include "parser.h"
#include "vm.h"
#include "header.h"

int main(int argc, char *argv[]){
    int l=0,a=0,v=0,i=0;

    printf("Welcome.\n");

    if(argc != 0){
        for(i=0; i<argc; i++){
            if(strcmp(argv[i], "-l") == 0)
                l = 1;//print token list
            if(strcmp(argv[i], "-a") == 0)
                a = 1;//print assembly code
            if(strcmp(argv[i], "-v") == 0)
                v = 1; //print virtual machine exec. trace
        }
    }
    scanner(l);
    parser(a);
    vm(v);

    return 0;
}