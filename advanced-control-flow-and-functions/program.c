#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf buf;

void error_recovery(){
	printf("Error discovered! Transferring control back to main.");
	longjmp(buf, 1);
}

int main(void) {
    
    while(1){
    if(setjmp(buf)==0){
    	printf("back in main");
    	break;
    }
    else{
    	error_recovery();
    }
   }

    return 0;
}