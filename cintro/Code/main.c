#include <stdio.h>
#include "ArrayList.h"

int main(int argc, char** argv){

    ArrayList arrayList = newArrayList();

    for(int i = 0; i < 10; i++){
        add(&arrayList, i);
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", get(&arrayList, i));
    }
}
