#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int ide,pc,q,p,final;

void loading(int j);
void acc_details(int i);
void withdraw(int a);
void deposit(int a);
void transaction_fund(int i);
int main_menu(int w);
void acc_delete(int i);
void paybill(int a);
void mob_bal(int a);
void close(void);
int menu(int q,int p);

struct date{
	char datee[10];
};
struct data{
	int pincode,id,deposit,withdraw,bankbalance;
	char nationality[10],name[10],address[20],phoneno[12];
	struct date dob;
}d[100];
int main()
{
	int i,key,ide,a,pc,choice2;
	char choice,g;      
	FILE *fa;
	system("color 70");
		fa=fopen("data.txt","r");
        printf("\n\n\t\t\tWELCOME TO ATM MACHINE");
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PLEASE ENTER LOGIN DETAILS \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		printf("\n\n\t\tEnter your id: ");
		scanf("%d",&ide);
		printf("\n\t\tEnter your pincode: ");
		scanf("%d",&pc);

		for(i=1;i<1000;i++){
				fscanf(fa,"%d%s%s%s%s%d%d%d%d",&d[i].id,&d[i].name,&d[i].dob,&d[i].phoneno,&d[i].nationality,&d[i].pincode,&d[i].bankbalance,&d[i].deposit,&d[i].withdraw);
				printf("\n%d%10s%10s%15s%10s%10d%10d%10d%10d",d[i].id,d[i].name,d[i].dob,d[i].phoneno,d[i].nationality,d[i].pincode,d[i].bankbalance,d[i].deposit,d[i].withdraw);
		if(i==ide)
			{
				if(pc==d[i].pincode)
				{
					fclose(fa);
					menu(ide,pc);
				}
			}
						}
	for(i=ide;i<1000;i++){
		if((i==ide && pc!=d[i].pincode) || (i!=ide && pc==d[i].pincode) || (i!=ide && pc!=d[i].pincode)){
			printf("\n\nWrong id or password!!\a\a\a");
            printf("\n\t\tEnter 1 to try again and 0 to exit:");
            scanf("%d",&final);
            if (final==1)
                    {
						fclose(fa);
                        system("cls");
                        main();
                    }
            else if (final==0)
                    {
                    	fclose(fa);
                    system("cls");
                    close();
					exit(1);
					}
            else
                    {printf("\nInvalid!");
                    loading(1000000000);
                    system("cls");
                }
        }
        return 0;
	}
}

void loading(int j){   
int i,k;
    for(i=0;i<j;i++)
         k=i;
}

int menu(int q, int p ){
	return 0;
}
