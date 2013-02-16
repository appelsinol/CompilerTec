#include <stdlib.h>
#include "ArrayList.h"

ArrayList newArrayList(){
    ArrayList arrayList;
    arrayList.size = 1;
    arrayList.lastElement = -1;
    arrayList.array = (int*)malloc(sizeof(int) * 1);

    return arrayList;
}

void add(ArrayList* arrayList, int value){
    if(arrayList->lastElement + 1 == arrayList->size){
        arrayList->size = arrayList->size * 2;
        arrayList->array = realloc(arrayList->array, sizeof(int) * arrayList->size);
    }

    arrayList->lastElement++;
    arrayList->array[arrayList->lastElement] = value;
}

int get(ArrayList* arrayList, int index){
    if(arrayList->lastElement >= index && index >= 0){
        return arrayList->array[index];
    }
    return 0;
}

void set(ArrayList* arrayList, int index, int value){
    if(arrayList->lastElement >= index && index >= 0){
        return arrayList->array[index] = value;
    }
}


