#include <stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char name[40];
    struct student *n,*p;

} stud;
int main()
{
    struct student *s, *c, *t,*last;
    int ch, tr;
    s = c = t = '\0';
    do
    {
        printf("linked list operations\n");
        printf("1.add record\n");
        printf("2.insert record\n");
        printf("3.delete record\n");
        printf("4.search record\n");
        printf("5.display\n");
        printf("6.exit\n");
        printf("enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("add record\n");
            t = (stud*)malloc(sizeof(stud));
            printf("enter name\n");
            scanf("%s", t->name);
            printf("enter roll\n");
            scanf("%s", &t->roll);
            t->n = '\0';
            t->p = '\0';
            if (s=='\0')
                s = t;
            else
            {
                c = s;
                while (c->n != '\0')
                {
                    c = c->n;
                }
                c->n = t;
                t->p=c;
            }
            printf("record added\n");

            break;
        case 2:
            printf("insert record\n");
            printf("enter the roll at which record has to be inserted\n");
            scanf("%d", &tr);
            t = (stud*)malloc(sizeof(stud));
            printf("enter name\n");
            scanf("%s", t->name);
            printf("enter roll\n");
            scanf("%s", &t->roll);
            t->n = '\0';
            t->p = '\0';
            if (s == '\0')
                printf("no record found");
            else
            {
                if (s->roll == tr)
                {
                    t->n = s;
                    s->p=t;
                    s = t;
                    printf("record inserted\n")
                }
                c = s;
                else
                {
                    while (c->n != '\0')
                    {
                        if (c->n->roll == tr)
                        {
                            t->n = c->n;
                            c->n->p=t;
                            c->n = t;
                            t->p=c;
                            printf("record inserted\n");
                            break;
                        }
                        else
                        {
                            c = c->n;
                        }
                    }
                    if (c->n == '\0')
                        printf("record not found");
                }
            }
            break;
        case 3:
            printf("deletion\n");
            if (s == '\0')
                printf("no record found\n");
            printf("enter the roll number for which details has to be deleted\n");
            scanf("%d", &tr);
            if (s->roll == tr)
            {
                t = s;
                s = t->n;
                s->p='\0';
                free(t);
            }
            else
            {
                c = s;
                while (c->n !== '\0')
                {
                    if (c->n->roll = tr)
                    {
                        t = c->n;
                      c->n = t->n;
                        c->n->p=c;
                        free(t);
                        if(c->n=='\0')
                        t==c;
                        break;
                        /* code */
                    }
                    else
                    {
                        c=c->n;
                    }
                    
                }
            }
            break;
            else printf("cant be deleted\n");
        case 4:
            if (s == '\0')
                printf("record not found\n");
            else
            {
                printf("enter the roll number to be searched\n");
                scanf("%d", &tr);
                c = s;
                while (c != '\0')
                {
                    if (c->roll == tr)
                    {
                        printf("record found\n");
                        printf("roll=%d\nname=%s", c->roll, c->name);
                        break;
                    }
                    c = c->n;
                }
                if (c == '\0')
                {
                    printf("roll doesnot exist\n");
                }
            }
            break;
        case 5:
            if (s = '\0')
            {
                printf("no record exist\n");
            }
            else
            {
                c = s;
                while (c != '\0')
                {
                    printf("roll=%d", c->roll);
                    printf("name=%s", c->name);
                    printf("\n");
                    c = c->n;
                }
            }
            break;
        case 6:
            continue;

        default:
            printf("invalid choice\n");
        }
        /* code */
    } while (ch != 6);

    return 0;
}