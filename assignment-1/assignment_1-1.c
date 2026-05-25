#include<stdio.h>
#include<stdlib.h>
struct members
{
	char name[20];
	int acountnumber;
	char acounttype[20]; 
    // [saving/loan/ppf/nps]
	int balance; // [minimun balance = 1000]
};
void AcceptData( )
{
    struct members s;
    printf("\nenter the name:");
    scanf("%s", s.name);
    printf("\nenter the acount number:");
    scanf("%d", &s.acountnumber);
    printf("\nenter the acount type:");
    scanf("%s",s.acounttype );
    printf("\nenter the balance:");
    scanf("%d", &s.balance);
}
void Deposit()
    {
        struct members s;
         int amount;
         int ac;
         printf("\nhow acount no:");
        scanf("%d", &ac);
         if(s.acountnumber= ac)
         {
        printf("\nhow many amount you want to deposite:");
        scanf("%d", &amount);
        s.balance= s.balance+ amount;
        printf("\namount credited:%d",s.balance);
        printf("\namount credited sucessfully....!");
         }
    }
void Withdraw()
    {
        struct members s;
        int amount;
        int ac;
         printf("\nhow acount no:");
        scanf("%d", &ac);
         if(s.acountnumber= ac)
         {
        printf("\nhow many amount you want to withdraw:");
        scanf("%d", &amount);
        s.balance= s.balance- amount;
        printf("\namount withdraw:%d",s.balance);
        printf("\namount debited sucessfully...!:");
         }
    }
void Display()
 {
        struct members s;      
    printf("\nname :%s\naccount no:%d\n account type:%s\n balance: %d", s.name, s.acountnumber, s.acounttype, s.balance);
      
 }
 int main()
 {
    int ch;
    do
    {
        printf("0.exit \n 2. accept\n3.display\n 4. withdraw\n 5.deposite ");
        printf("enter the choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 0: exit(0);
            case 1: AcceptData(); break;
            case 2: Display(); break;
            case 3: 
            Withdraw(); break;
            case 4:
            Deposit(); break;
            default: printf("\ninvalied choice"); 

        }
    
    } while (ch!=0);
    
    return 0;
 }