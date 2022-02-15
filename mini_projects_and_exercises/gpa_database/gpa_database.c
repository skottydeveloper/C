/* 
-  Write a complete program that accepts id and gpa of a student from the terminal and then save the information to a text file. 
-  The id and gpa of the student should be managed by a new structure data type. 
-  As you are required to write a complete program here, you should write functions as well as the main(). 
-  Breakdown the problem into various relevant functions. */

/*****************************************************************************
 * List of header files used.
******************************************************************************/
#include <stdio.h>

/*****************************************************************************
 * List of structs used.
******************************************************************************/
struct student {
    int id;
    double gpa;
};
typedef struct student student_t;

/*****************************************************************************
 * List of function definitions used.
******************************************************************************/
student_t scanStudent(void);
void printStudent(student_t s);
int saveStudent(student_t s, char filename[]);
char readStudent(char filename[], student_t *s);

/*****************************************************************************
 * The main() function.
******************************************************************************/
int main(void) {
    student_t student;
    student = scanStudent();
    printStudent(student);
    return 0;
}

/******************************************************************************
 * scanStudent() function description:
 * The 'scanStudent()' function takes the user's inputs, and stores it - via
 * the typedef struct of 'student_t'.   
 *
 * Inputs:
 * -  'id'.
 * -  'gpa'.
 *
 * Outputs:
 * -  None.
******************************************************************************/
student_t scanStudent(void) {
    student_t s;

    printf("Enter id: ");
    scanf("%d", &s.id);

    printf("Enter gpa: ");
    scanf("%lf", &s.gpa);

    return s;
}

/******************************************************************************
 * printStudent() function description:
 * The 'printStudent()' function takes the user's inputs, and displays it - via
 * the typedef struct of 'student_t'.  
 *
 * Inputs:
 * -  None.
 *
 * Outputs:
 * -  'id'.
 * -  'gpa'.
******************************************************************************/
void printStudent(student_t s) {
    printf("\nInformation in data.txt\n");
    printf("id\t%d\n", s.id);
    printf("gpa\t%.2f\n", s.gpa);
}

/******************************************************************************
 * saveStudent() function description:
 * The 'saveStudent()' function takes the user's inputs, and saves it into a
 * newly made, and written file - via the typedef struct of 'student_t'.   
 *
 * Inputs:
 * -  None.
 *
 * Outputs:
 * -  None.
******************************************************************************/
int saveStudent(student_t s, char filename[]) {
    FILE* fid = fopen(filename, "w");

    if (fid == NULL) {
        return 1;
    }
    
    fprintf(fid, "%d %.2f \n", s.id, s.gpa);
    fclose(fid);

    return 0;
}

/******************************************************************************
 * readStudent() function description:
 * The 'readStudent()' function involves opening up the created file, and reads
 * the user's inputs - via the typedef struct of 'student_t'.   
 *
 * Inputs:
 * -  None.
 *
 * Outputs:
 * -  None.
******************************************************************************/
char readStudent(char filename[], student_t *s) {
    FILE* fid = fopen(filename, "r");

    if (fid == NULL) {
        return 1;
    }

    fscanf(fid, "%d %lf", &(*s).id, &(*s).gpa);
    fclose(fid);

    return 0; 
}