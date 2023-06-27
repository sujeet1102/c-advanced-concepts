#include<stdlib.h.h>
#include"other.h"

int thefavnum = 4; //global in this file & can be accessed by other files using extern. 

static int anothernum = 5; //global but can't be accessed by other file.

int main(void){
    printf("%d\n",getfavnum());
}