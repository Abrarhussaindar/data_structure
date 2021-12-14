#include <stdio.h>
#include <stdlib.h>

void insert_student_details();
void delete_on_the_base_of_studetid();
    void display_student_details_based_on_studentid();
    void display_marks_above_75();
        int length_of_the_list();
struct student
{
 char studentid[12];
 char name[40];
 int marks;
};
struct node
{
 struct student s;
 struct node *link;
};
struct node *head_pointer=NULL;

int menu(){
    int choice;
    printf("\n1: insert_student_details\n");
    printf("\n2: delete_on_the_base_of_studetid\n");
    printf("\n3: display_student_details_based_on_studentid\n");
    printf("\n4: display_marks_above_75\n");
    printf("\n10: Exit\n");

    printf("\nEnter your choice:\n");
    scanf("%d",&choice);
    return choice;
}
int main()
{
for(;;){
        switch(menu()){
            case 1: insert_student_details();
            break;
            case 2: delete_on_the_base_of_studetid();
            break;
            case 3: display_student_details_based_on_studentid();
            break;
            case 4: display_marks_above_75();
            break;
            default:
                printf("\nInvalid choice\n");
                break;
        }
    }
}
void insert_student_details()
 { char ch;
 int num;
 printf("enter the no. of students: \n");
 scanf("%d",&num);
 struct node *temp ,*p= head_pointer;
for(int i=0;i<num;i++)
 {
 temp=(struct node*)malloc(sizeof(struct node));
 printf("enter the id of student\n");
 scanf("%s",temp->s.studentid);
 printf("enter the name of student\n");
 scanf("%s",temp->s.name);
 printf("enter the marks obtained by student\n");
 scanf("%d",&temp->s.marks);
 temp->link = NULL;
 if(head_pointer==NULL)
 {
    head_pointer=temp;
 }
 else
 {  
    while(p->link != NULL){
            p = p->link;
        }
        p->link = temp;
    }
 }

}
int length_of_the_list(){
    struct node *temp;
    int count=0;

    temp = head_pointer;
    while(temp != NULL){
        count++;
        temp = temp->link;
    }

    return count;
}
void display_student_details_based_on_studentid()
{
 struct node *temp=head_pointer;
if(head_pointer == NULL){
        printf("\nThe List is Empty\n");
    }else{

         while(temp != NULL){
             printf("\tthe details of student having id %s are: \n",temp->s.studentid);
            printf("\n\tstudent id is : %s\n" ,temp->s.studentid);
            printf("\n\tstudent name is : %s\n" ,temp->s.name);
            printf("\n\tmarks obtained by student are : %d\n" ,temp->s.marks);
            temp=temp->link;
        }
    }

}
void display_marks_above_75()
{
 struct node *temp=head_pointer;
if(head_pointer == NULL){
        printf("\nThe List is Empty\n");
    }else{
        printf("the details of the studets whose marks are above 75\n");
         while(temp != NULL){
             if(temp->s.marks>75){
                  printf("\nstudent id is : %s\n" ,temp->s.studentid);
                    printf("student name is : %s\n" ,temp->s.name);
                    printf("marks obtained by student are : %d\n\n" ,temp->s.marks);
             }
 temp=temp->link;
 }
    }

}

void delete_on_the_base_of_studetid(){
    struct node *temp = head_pointer, *another_temp;
    char id[12];
    printf("\nEnter the student id  which you want to delete\n");
    scanf("%s",id);
        while(temp->s.studentid != id){
            temp = temp->link;
        }
            another_temp = temp->link;
    temp->link = another_temp->link;
    free(another_temp);
}
