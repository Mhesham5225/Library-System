#include "Prog1.h"

void Insert_Book(FILE *a)
{

   Book b1;
    printf("Enter title: ");
    fgets(b1.title,100,stdin);
    toc(b1.title);
    printf("Enter author: ");
    fgets(b1.author,100,stdin);
    toc(b1.author);
    printf("Enter publisher: ");
    fgets(b1.pub,100,stdin);
    toc(b1.pub);
    printf("Enter ISBN: ");
    fgets(b1.ISBN,20,stdin);
    toc(b1.ISBN);
    printf("Enter number of copies: ");
    scanf("%d",&b1.ncp);
    printf("Enter number of current copies: ");
    scanf("%d",&b1.cncp);
    clearinput();
    printf("Enter book's category: ");
    fgets(b1.category,100,stdin);
    toc(b1.category);
    b[countb] = b1;
    countb++;



}

void Search_Book()
{
 int x,i,loc;
 char req[100];
 printf("Search by:\n");
 printf("\t1. ISBN\n\t2. Book title\n\t3. Author\n\t4. Category\n\t");
    printf("Enter your choice: ");
    scanf("%d",&x);
    clearinput();
        if(x==1){
            printf("Enter required ISBN:");
            scanf("%[^\n]",req);
            loc=Search_ISBN(req);
            printf("%s",b[loc].title);
            }
      else if(x==2){
            printf("Enter required book title");
            scanf("%[^\n]",req);
            for(i=0;i<SIZE;i++){
                if ((strstr(b[i].title,req)!=NULL))
                    printf("%s",b[i].title);
            }}
       else if(x==3){
                      printf("Enter required author name");
            scanf("%[^\n]",req);
            for(i=0;i<SIZE;i++){
                if ((strstr(b[i].author,req)!=NULL))
                    printf("%s",b[i].title);
            }}
        else if(x==4){
                      printf("Enter required book category");
            scanf("%[^\n]",req);
            for(i=0;i<SIZE;i++){
                if ((strstr(b[i].category,req)!=NULL))
                    printf("%s",b[i].title);
            }}
}




int Search_ISBN(char ISBN[])
{
  int loc=-1,i;
           for (i=0;i<countb;i++){
            if((strcmp(ISBN,b[i].ISBN)==0)){
               loc=i;
               return loc;}
               else if (loc=-1){
                printf("ISBN not found");}
               }
}


void Delete_book()
{
    int k,i;
    char a[20];
    printf("Enter ISBN:");
    scanf("%s",a);
    k=Search_ISBN(a);
    for(i=k;i<=(countb-2);i++)
        b[i]=b[i+1];

}
void Add_Copy()
{
    int i;
    char a[20];
    printf("Enter ISBN: ");
    scanf("%s",a);
    printf("Enter number of copies to be added: ");
    int n;
    scanf("%d",&n);
    i=Search_ISBN(a);
    b[i].ncp++;
    b[i].cncp++;

}


