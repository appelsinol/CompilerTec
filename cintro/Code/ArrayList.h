typedef struct{
    int size;
    int lastElement;
    int* array;
} ArrayList;

ArrayList newArrayList();
int get(ArrayList* arrayList, int index);
void set(ArrayList* arrayList, int index, int value);
void add(ArrayList* arrayList, int value);

