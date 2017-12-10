#ifndef PROG1_H_INCLUDED
#define PROG1_H_INCLUDED

typedef struct{
int building;
char street[30];
char city[20];
}ad;

typedef struct{
char fn[20];
char ln[50];
int ID;
ad Userad;
long ph;
char Email[50];
int age;
int cbrrw;
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
extern Book b[SIZE];
extern int countb =0;
extern User m[SIZE];
extern int countm =0;
extern brrw borrowed[SIZE];
extern int countbr =0;
extern int prb; //the present number of books int the file
extern int prm;
extern int prbr;
#endif // PROG1_H_INCLUDED
