#include "Prog1.h"
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
