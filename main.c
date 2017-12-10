#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
#include <fcntl.h>
typedef struct{
int building;
char street[30];
char city[20];
}ad;

typedef struct{//Hi I am maram..............
char fn[20];
char ln[50];
int ID;
ad Userad;
long ph;
char Email[50];
int age;
}User;

typedef struct{
char title[SIZE];
char author[SIZE];
char pub[SIZE];
char ISBN[18];

int ncp;
int cncp;
char category[20];

}Book;

typedef struct{
    int day;
    int month;
    int year;}date;

typedef struct{
  date due;
  int ID;
  char ISBN[18];
  date brrw;
  date rtrn;}brrw;

void Insert_Book(FILE *a);
Book Search_Book();
void Add_Copy();
int Search_ISBN();
void Delete_book();
User Register(FILE *u);
brrw Borrow();
brrw Return();
int Search_ID();
void Remove_member();
void Save();
void Refresh();
char * toc(char * st);
int clearinput();

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
f2 = fopen("books.txt","a+");
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
void Insert_Book(FILE *a)
{

   Book b1;
    printf("Enter title: ");
    fgets(b1.title,SIZE,stdin);
    toc(b1.title);
    printf("Enter author: ");
    fgets(b1.author,SIZE,stdin);
    toc(b1.author);
    printf("Enter publisher: ");
    fgets(b1.pub,SIZE,stdin);
    toc(b1.pub);
    printf("Enter ISBN: ");
    fgets(b1.ISBN,18,stdin);
    toc(b1.ISBN);
    printf("Enter number of copies: ");
    scanf("%d",&b1.ncp);
    printf("Enter number of current copies: ");
    scanf("%d",&b1.cncp);
    clearinput();
    printf("Enter book's category: ");
    fgets(b1.category,20,stdin);
    toc(b1.category);
    b[countb] = b1;
    countb++;



}

Book Search_Book()
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
printf("%s",b[1].title);
}
User Register(FILE *u)
{
User user;
    printf("Enter first name: ");
    fgets(user.fn,20,stdin);
    toc(user.fn);
    printf("Enter last name: ");
    fgets(user.ln,50,stdin);
    toc(user.ln);
    printf("Enter User ID: ");
    scanf("%d",&user.ID);
    printf("Enter address: Building: ");
    scanf("%d",&user.Userad.building);
    clearinput();
    printf("Street: ");
    fgets(user.Userad.street,30,stdin);
    toc(user.Userad.street);
    printf("City: ");
    fgets(user.Userad.city,20,stdin);
    toc(user.Userad.city);
    printf("Enter phone: ");
    scanf("%ld",&user.ph);
    clearinput();
    printf("Enter user e-mail: ");
    fgets(user.Email,50,stdin);
    toc(user.Email);
    printf("Enter user age: ");
    scanf("%d",&user.age);
    clearinput();
    m[countm] = user;
    countm++;

}
brrw Borrow()
{

}
brrw Return()
{

}
int Search_ID()
{

}
void Remove_member()
{

}
int clearinput()
{
    int ch;
    while(((ch=getchar()) != EOF) && (ch != '\n'))
        return ch;
}
char * toc(char * st)
{
    int n;
    n=strlen(st);
    st[n-1]='\0';
    return st;
}
void Save(FILE * a,FILE * x)
{
    int i;
    for(i=prb;i<countb;i++)
    fprintf(a,"%s,%s,%s,%s,%d,%d,%s\n",b[i].title,b[i].author,b[i].pub,b[i].ISBN,b[i].ncp,b[i].cncp,b[i].category);

    for(i=0;i<countm;i++){
        fprintf(x,"%s,%s,%d,%d,%s,%s,%ld,%s,%d",m[i].fn,m[i].ln,m[i].ID,m[i].Userad.building,m[i].Userad.street,m[i].Userad.city,m[i].ph,m[i].Email,m[i].age);
    }
}
void Refresh(FILE * f2)
{

    while(!feof(f2))
    {
        fscanf(f2,"%s%s%s%s%d%d%s",b[countb].title,b[countb].author,b[countb].pub,b[countb].ISBN,&b[countb].ncp,&b[countb].cncp,b[countb].category);
        countb++;
        prb=countb;
    }
}

