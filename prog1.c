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
