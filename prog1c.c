#include "Prog1.h"
#include <time.h>
brrw Borrow()
{
    brrw b;
    printf("Enter book ISBN: ");
    fgets(b.ISBN,SIZE,stdin);
    toc(b.ISBN);
    printf("Enter user ID: ");
    scanf("%d",&b.ID);
    clearinput();
    time_t curtime;
    printf("%s",ctime(&curtime));
    return b;
}
brrw Return()
{

}

