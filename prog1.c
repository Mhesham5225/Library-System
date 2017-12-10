#include "Prog1.h"
void Insert_Book(FILE *a)
{

   Book b1;
    printf("Enter title: ");
    fgets(b1.title,SIZE,stdin);
    strtok(b1.title);
    printf("Enter author: ");
    fgets(b1.author,SIZE,stdin);
    strtok(b1.author);
    printf("Enter publisher: ");
    fgets(b1.pub,SIZE,stdin);
    strtok(b1.pub);
    printf("Enter ISBN: ");
    fgets(b1.ISBN,18,stdin);
    strtok(b1.ISBN);
    printf("Enter number of copies: ");
    scanf("%d",&b1.ncp);
    printf("Enter number of current copies: ");
    scanf("%d",&b1.cncp);
    clearinput();
    printf("Enter book's category: ");
    fgets(b1.category,20,stdin);
    strtok(b1.category);
    b[countb] = b1;
    countb++;



}

Book Search_Book()
{

}




int Search_ISBN(char ISBN[])
{
  int loc=-1,i;
           for (i=0;i<SIZE;i++){
            if((strcmp(ISBN,b[i].ISBN)==0)){
               loc=i;
               return loc;}
               else if (loc=-1){
                printf("ISBN not found");
                Add_Copy();}
               }
}


void Delete_book()
{

}
void Add_Copy()
{
    char a[20];
    printf("Enter ISBN: ");
    scanf("%s",a);
    //FILE *b = Search_in_File(a);
    printf("Enter number of copies to be added: ");
    int n;
    scanf("%d",&n);

}


