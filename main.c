#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
#include <fcntl.h>
#include "Prog1.h"

Book b[SIZE];
int countb =0;
User m[SIZE];
int countm =0;
brrw borrowed[SIZE];
int countbr =0;
int prb; //the present number of books int the file
int prm;
int prbr;
int main()
{


FILE *f1;
FILE *f2;
//FILE *f3;
f1 = fopen("members.txt","w+");
f2 = fopen("books.txt","w+");
//f3 = fopen("borrowed.txt","a+");

    Refresh(f2);
    //int i;
    //for( i=0;i<prb;i++)
    //printf("%s%s%s%s%d%d%s",b[i].title,b[i].author,b[i].pub,b[i].ISBN,b[i].ncp,b[i].cncp,b[i].category);

    printf("\t Main Menu: \n");
    printf("\t1. Insert New Book\n\t2. Search Books\n\t3. Delete Book\n\t4. Register User\n\t5. Borrow Book\n\t6. Return Book\n\t"
           "7.Search for member\n\t8. Remove Member\n\t9.Add new copy of a book\n\t10.Save\n");
    printf("Enter your choice: ");
    int a;
    scanf("%d",&a);
    clearinput();
    switch(a)
    {
    case 1:
        Insert_Book(f2);
        printf("\t1.Return to main menu\n\t2.Save and exit\nEnter your choice: ");
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            main();
            break;
        case 2:
            Save(f2,f1);
            break;
        }

        break;
    case 2:
        Search_Book();

        break;
    case 3:
        Delete_book();
        break;
    case 4:
        Register(f1);
        printf("\t1.Return to main menu\n\t2.Save and exit\nEnter your choice: ");
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            main();
            break;
        case 2:
            Save(f2,f1);
        }
        break;
    case 5:
        Borrow();
        break;
    case 6:
        Return();
        break;
    case 7:
        Search_ID();
        break;
    case 8:
        Remove_member();
        break;
    case 9:
        Add_Copy();
    case 10:
        Save(f2,f1);
        break;

    }

    return 0;
}

