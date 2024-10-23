//Write a program to create student database where user can store student data, search for student , see student record and delete a student from the record
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{   
    char first_name[50];
    char last_name[50];
    int roll;
    int class;
    int age;
    float total_marks;
};
//Function prototyping
void add_students();
void student_record();
void search_student();
void delete();

int main()
{
    int choice;
    do
    {
        printf("\t\t\t\t<<Student record management system>>\n");
        printf("\n\t\t\t1.Add student record\n");
        printf("\n\t\t\t2.student records\n");
        printf("\n\t\t\t3.Search student\n");
        printf("\n\t\t\t4.Delete student\n");
        printf("\n\t\t\t5.exit\n");
        printf("\n\t\t\tENTER YOUR CHOICE: ");

        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                add_students();
                printf("\t\t\tPress any key to exit.\n");
                break;
            }
            case 2:
            {
                student_record();
                printf("\t\t\tPress any key to exit.\n");
                break;
            }
            case 3:
            {
                search_student();
                printf("\n\t\t\t\tPress any key to exit.");
                break;
            }
            case 4:
            {
                delete();
                printf("\n\t\t\t\tPress any key to exit.");
                break;
            }
            case 5:
            {
                printf("\t\t\tThank you\n");
            }
        }
    } while (choice == 5);
    return 0;
}

//Function to add students
void add_students()
{
    char another;
    do
    {
        FILE *fptr = fopen("Student info.txt" , "a");

        int n;
        printf("How many student records you want to insert: ");
        scanf("%d" , &n);
        //Create a array structure for storing the information of each student
        struct student rec[n];
        //For better visualization
        printf("\t\t\t\t\t\t========================================\n");
        printf("\t\t\t\t\t\t           Student Records              \n");
        printf("\t\t\t\t\t\t========================================\n");
        //Get the info from the user
        for (int i = 0; i < n; i++)
        {
            printf("\t\t\t\t\t\tEnter the name: ");
            scanf("%s" , rec[i].first_name);
            printf("\t\t\t\t\t\tEnter the last name: ");
            scanf("%s" , rec[i].last_name);
            printf("\t\t\t\t\t\tEnter the class : ");
            scanf("%d" , &rec[i].class);
            printf("\t\t\t\t\t\tEnter the roll : ");
            scanf("%d", &rec[i].roll);
            printf("\t\t\t\t\t\tEnter the age : ");
            scanf("%d" , &rec[i].age);
            printf("\t\t\t\t\t\tEnter the total mark: ");
            scanf("%f" , &rec[i].total_marks); 
        }
        /* //Print the info
        for (int i = 0; i < n; i++) {
            printf("\nStudent %d:\n", i + 1);
            printf("  Name        : %s\n", rec[i].name);
            printf("  Roll Number : %d\n", rec[i].roll);
            printf("  Age         : %d\n", rec[i].age);
            printf("  Total Marks : %.2lf\n", rec[i].total_marks);
        }
        printf("========================================\n"); */

        if (fptr == NULL)
        {
            fprintf(stderr,"\t\t\tCan't open file.");
        }
        else
        {
         printf("\t\t\tRecord stored successfully.\n");
        }

        fwrite(&rec , sizeof(struct student),1,fptr);
        fclose(fptr);
        printf("\t\t\tDo you want to add another record(y/n)?");
        scanf("%s",&another);
    } while (another == 'Y' || another == 'y');
}

// Function to print the record
void student_record()
{
    FILE *fptr = fopen("Student record.txt" , "r");
    struct student rec;
    printf("\t\t\t\t\t\t========================================\n");
    printf("\t\t\t\t\t\t           Student Records              \n");
    printf("\t\t\t\t\t\t========================================\n");

    if (fptr == NULL)
    {
        fprintf(stderr,"\t\t\t\tNo student found.");
    }
    else
    {
        printf("\t\t\t\tRecords.\n");
    }

    while (fread(&rec , sizeof(struct student), 1, fptr))
    {
        printf("\n\t\t\t\tStudent name: %s %s", rec.first_name,rec.last_name);
        printf("\n\t\t\t\tClass : %d", rec.age);
        printf("\n\t\t\t\tClass : %d", rec.class);
        printf("\n\t\t\t\tRoll : %d", rec.roll);
        printf("\n\t\t\t\tClass : %d", rec.total_marks);
    }
    fclose(fptr);
}

//Function to search student
void search_student()
{
    FILE *fptr = fopen("Student record.txt" , "r");
    struct student rec;
    int roll_no , found =0;
    printf("\t\t\t\t\t\t========================================\n");
    printf("\t\t\t\t\t\t           Search Student              \n");
    printf("\t\t\t\t\t\t========================================\n");
    printf("Enter the roll number: ");
    scanf("%d" , &roll_no);
    while (fread(&rec, sizeof(struct student) , 1, fptr))
    {
        if (rec.roll == roll_no)
        {
            found = 1;
            printf("\n\t\t\t\tStudent name: %s %s", rec.first_name,rec.last_name);
            printf("\n\t\t\t\tAge: %d" , rec.age);
            printf("\n\t\t\t\tClass : %d", rec.class);
            printf("\n\t\t\t\tRoll : %d", rec.roll);
            printf("\n\t\t\t\tTotal mark : %d", rec.total_marks);
        }
    }
    if (!found)
    {
        printf("Student not found!!!");
    }
    fclose(fptr);
}
//Function to delete student
void delete()
{
    FILE *fptr , *fptr1;
    struct student rec;
    int roll_no, found = 0;
    printf("\t\t\t\t\t\t========================================\n");
    printf("\t\t\t\t\t\t           Search Student              \n");
    printf("\t\t\t\t\t\t========================================\n");

    fptr=fopen("student info.txt","r");
    fptr1=fopen("temp.txt","w");

    printf("Enter the roll number: ");
    scanf("%d" , &roll_no);

    if (fptr == NULL)
    {
        fprintf(stderr , "\t\t\t\tNo student found!!");
    }

    while (fread(&rec , sizeof(struct student),1,fptr))
    {
        if (rec.roll == roll_no)
        {
          found == 1;
        }
        else
        {
            fwrite(&rec , sizeof(struct student),1,fptr1);
        }

        fclose(fptr);
        fclose(fptr1);

        if (found)
        {
            remove("Student record");
            rename("temp.txt" ,"Student record");
            printf("\n\t\t\tRecord deleted successfully.\n");
        }
        
        if(!found)
        {
            printf("\n\t\t\tRecord not found.\n");
        }
    }
}