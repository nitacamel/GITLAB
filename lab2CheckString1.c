#include<stdio.h>
#include<string.h>

void main()
{
    char command[100],string[100][100],string1[100][100];
    double temp = -1;
    char *ptr;
    int i=0,count,a=0;
    char *token;

        printf("Command> ");
        gets(command);
    do
    {
        count=0;
        strcpy(string1[0],"");
        strcpy(string[0],"");
        token = strtok(command," ");
            i=0;
            while(token != NULL)
            {
                strcpy(string1[i],token);
                token = strtok(NULL," ");
                if(token!=NULL)
                {
                     strcpy(string[0],token);
                }
                            i++;
                    count++;
            }
            temp = strtod(string,&ptr);

            if(strcmp(ptr,"")!=0)
            {
                a=0;
            }
            else
            {
                a=1;
            }
            if(a==1)
            {
            if(strcmp(string1,"list")==0 || strcmp(string1,"end")==0 ||strcmp(string1,"sort")==0 ||strcmp(string1,"pop")==0)
            {
                if(count>1)
                {
                    printf("answer> parameter error\n");
                    printf("Command> ");
                    gets(command);
                }
                else if(strcmp(string1,"end")!=0 )
                {
                    printf("answer> ok\n");
                    printf("Command> ");
                    gets(command);
                }
                else
                {
                    strcpy(string1,"end");
                }

            }
            else if(strcmp(string1,"delete")==0 || strcmp(string1,"push")==0 || strcmp(string1,"insert")==0 ||strcmp(string1,"search")==0 ||strcmp(string1,"peek")==0)
            {
                    if(count==1)
                        {
                            printf("answer> parameter error\n");
                            printf("Command> ");
                            gets(command);
                        }
                    else if(count>2)
                        {
                            printf("answer> parameter error\n");
                            printf("Command> ");
                            gets(command);
                        }
                    else
                        {
                            printf("answer> ok\n");
                            printf("Command> ");
                            gets(command);
                        }
            }
            else if(strcmp(string1,"add")==0)
            {
                 if(count==1)
                {
                    printf("answer> parameter error\n");
                    printf("Command> ");
                    gets(command);
                }
                else
                {

                    printf("answer> ok\n");
                    printf("Command> ");
                    gets(command);
                }
            }
            else
                 {
                    printf("answer> parameter error\n");
                    printf("Command> ");
                    gets(command);
                }
            }
            else if(a==0)
            {
                    printf("answer> parameter error\n");
                    printf("Command> ");
                    gets(command);
            }
    }while(strcmp(command,"end")!=0);
    printf("answer> ok\n");
    printf("End Program\n");
    printf("Program writen by 57070501062 Nichanat Poonsawat");
}



