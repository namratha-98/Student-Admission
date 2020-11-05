#include <stdint.h>
#include "approach.h"

#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

struct student {
    char  name[STUDENT_NAME_LEN];
    char  program_first[PROGRAM_NAME_LEN];
    char  program_second[PROGRAM_NAME_LEN];
    char  program_third[PROGRAM_NAME_LEN];
    char  email[EMAIL_LEN];
    int32_t entrance_rank;
    float ug_grade;
    int32_t reg_number;
    char  admission_status[STATUS_LEN];
    char alloted_program[PROGRAM_NAME_LEN];
};

typedef struct student Student;
Student stud[NUMBER_OF_STUDENTS];
Student temp;


int num_of_reg=0,student_input,reg_number=1000;


void student_entry();
void allot_seats();
void allot_waitinglist_seats();
void count_total_applications();
#endif // STUDENT_H_INCLUDED
