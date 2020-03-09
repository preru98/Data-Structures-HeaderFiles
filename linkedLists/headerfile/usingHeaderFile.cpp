#include "linkedlistVer4.h"
using namespace std;

int main(){
     int array[]={23,35,91};
    int size=sizeof(array)/sizeof(array[0]);

    int array2[]={29,36,37,105,206,409};
    int size2=sizeof(array)/sizeof(array[0]);
    insert_at_end_array(array,size);
    insert_at_end_array2(array2,size2);
    Node* head= merge(start,start2);
    display(head);
}