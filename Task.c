#include <stdlib.h>
#include <stdio.h>

int main() {
printf("Welcome to the Program \nChoose one of the following to execute : \n 1 ) add or delete user \n 2 ) add or delete group \n 3 ) change information of a user \n 4 ) change account information \n 5 ) assign user to a group \n 0 ) exit Program \n");
int main, main2,inside;
char username[20],commnd[50],groupname[50];
scanf("%d",&main);
while(main){
    switch(main){

        case 1 :
        printf("1 ) Add User\n2 ) Delete User\n");
        scanf("%d",&inside);
        printf("Please Enter The username :\n");
        scanf("%s",username);

        if(inside==1){
        sprintf(commnd,"sudo useradd %s",username);
        system(commnd);
        }

        else if(inside==2){
        sprintf(commnd,"sudo userdel %s",username);
        system(commnd);
        }

        else{
        printf("\nWrong Choice");
        }
        break;


        case 2 :
        printf("1 ) Add Group\n2 ) Delete Group\n");
        scanf("%d",&inside);
        printf("Please Enter The Group Name :\n");
        scanf("%s",groupname);

        if(inside==1){
        sprintf(commnd,"sudo groupadd %s",groupname);
        system(commnd);
        }

        else if(inside==2){
        sprintf(commnd,"sudo groupdel %s",groupname);
        system(commnd);
        }

        else{
        printf("\nWrong Choice");
        }

        break;


        case 3 :
        printf("1 ) Change User Name\n2 ) Change Password\n3 ) Change Full Name,Room Number,Work Phone,etc.\n");
        scanf("%d",&inside);
        printf("Enter UserName:\n");
        scanf("%s",username);
        if(inside==1){
        printf("Enter a New UserName:\n");
        char newusername[20];
        scanf("%s",newusername);
        sprintf(commnd,"sudo usermod -l %s %s",newusername,username);
        system(commnd);
        }
        else if(inside==2){
        sprintf(commnd," sudo passwd %s",username);
        system(commnd);
        }
        else if(inside==3){
        sprintf(commnd," sudo chfn %s",username);
        system(commnd);
        }
        else{
	printf("Invalid Choice\n");
        }

        break;

        case 4 :
        printf("1 ) Add New Home Directory\n2 ) Change Password Expiration Date\n3 ) Change User ID\n4 ) Lock Account\n5 ) Unlock Account\n");
        scanf("%d",&inside);
        printf("Enter Account Name:\n");
        scanf("%s",username);
        switch(inside){
            case 1 :
                printf("Enter New Home Diractory Name:\n");
                char Newdir[20];
                scanf("%s",Newdir);
                sprintf(commnd,"sudo usermod -d %s %s",Newdir,username);
                system(commnd);
                break;
            case 2 :
                printf("Enter New Expiration Date :\n");
                char Expi[25];
                scanf("%s",Expi);
                sprintf(commnd,"sudo usermod -e %s %s",Expi,username);
                system(commnd);
                break;
            case 3 :
                printf("Enter New User ID\n");
                int uid;
                scanf("%d",&uid);
                sprintf(commnd,"sudo usermod -u %d %s",uid,username);
                system(commnd);
                break;
            case 4 :
                sprintf(commnd,"sudo usermod -L %s",username);
                system(commnd);
                break;
            case 5 :
                sprintf(commnd,"sudo usermod -U %s",username);
                system(commnd);
                break;

            default :
            printf("Invalid Choice");
            }
        break;

        case 5 :
        printf("Enter UserName To be Added In a Group\n");
        scanf("%s",username);
        printf("Enter The Group Name\n");
        scanf("%s",groupname);
        sprintf(commnd,"sudo  usermod -G %s %s",groupname,username);
        system(commnd);
        break;

        default :
            printf("Invalid Choice\n");

    }
printf("\nChoose one of the following to execute : \n 1 ) add or delete user \n 2 ) add or delete group \n 3 ) change information of a user \n 4 ) change account information \n 5 ) assign user to a group \n 0 ) exit Program \n");
scanf("%d",&main2);
main=main2;
}

return 0;
}