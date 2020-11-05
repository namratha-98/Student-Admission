#include <stdlib.h>
#include<string.h>
#include <assert.h>
#include <stdio.h>
#include "program.c"
#include "program.h"
#include "student.c"
#include "student.h"

int main()
{
    freopen("input.txt","r",stdin);
    int main_input=0;
    while(main_input!=7)
    {
        printf("\nEnter the action to be performed\n");
        printf(" 1. New student entry \n"
               " 2. Initialise the number of seats in each program\n"
               " 3. See the total number of applications submitted\n"
               " 4. Allot Seats\n"
               " 5. Allot Seats to waiting list students\n"
               " 6. Display seats filled in each course\n"
               " 7. Exit\n");

        scanf("%d",&main_input);


        switch(main_input) {

        case 1  : student_entry();
        break;

        case 2  : initialise_seats();
        break;

        case 3  : count_total_applications();
        break;

        case 4  : allot_seats();
        break;

        case 5  : allot_waitinglist_seats();
        break;

        case 6  : seats_filled();
        break;






}

    }

    return 0;
}
