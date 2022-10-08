#include <stdio.h>

struct Student
{
    char name[100];
    int id;
    int mark;
};

int main(void)
{

    int n;
    scanf("%d",&n);
    struct Student studests[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d",&studests[i].name,&studests[i].id,&studests[i].mark);
    }
    for(int i=0;i<n;i++){
        printf("%s %d %d\n",studests[i].name,studests[i].id,studests[i].mark);
    }


    return 0;
}