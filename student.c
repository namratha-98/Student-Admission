#include <string.h>
#include <stdio.h>
#include "student.h"
#include "program.h"


void student_entry(){

    do{
        num_of_reg++;
        prog.filled_bda_seats=0;
        prog.filled_ml_seats=0;
        prog.filled_es_seats=0;


        printf("\nEnter the following details: \n"
               "Name,Program(first second and third preference),Email,Entrance Rank,UG Grade\n");
        scanf("%s %s %s %s %s %d %f",&stud[num_of_reg].name,&stud[num_of_reg].program_first,&stud[num_of_reg].program_second,&stud[num_of_reg].program_third,&stud[num_of_reg].email,&stud[num_of_reg].entrance_rank,&stud[num_of_reg].ug_grade);
        printf("\nDo you want to enter data of another student 1.Yes 2.No\n");
        scanf("%d",&student_input);
        stud[num_of_reg].reg_number=0;
        strcpy(stud[num_of_reg].admission_status,"status pending");

    }while(student_input==1);

}


void count_total_applications(){
    printf("\nTotal application count is : %d\n", num_of_reg);
}

void allot_seats(){

    for(int i=1;i<num_of_reg+1;i++)
        for(int j=1;j<num_of_reg+1;j++)
            if(stud[i].entrance_rank<stud[j].entrance_rank){
                temp=stud[i];
                stud[i]=stud[j];
                stud[j]=temp;
            }
    for(int i=1;i<num_of_reg+1;i++)
            strcpy(stud[i].alloted_program,"");


    for(int i=1;i<num_of_reg+1;i++){

        if(stud[i].ug_grade>=5.0){


            if(!strcmp(stud[i].program_first,"bda") && prog.filled_bda_seats<prog.big_data_seats){
                prog.filled_bda_seats++;
                strcpy(stud[i].admission_status,"Allotted");
                strcpy(stud[i].alloted_program,"bda");
                reg_number++;
                stud[i].reg_number=reg_number;
            }
            else if(!strcmp(stud[i].program_first,"bda") && prog.filled_bda_seats>=prog.big_data_seats){
                strcpy(stud[i].admission_status,"Waiting");

            }

            if(!strcmp(stud[i].program_first,"ml") && prog.filled_ml_seats<prog.machine_learning_seats){
                prog.filled_ml_seats++;
                strcpy(stud[i].admission_status,"Allotted");
                strcpy(stud[i].alloted_program,"ml");
                reg_number++;
                stud[i].reg_number=reg_number;
            }
            else if(!strcmp(stud[i].program_first,"ml") && prog.filled_ml_seats>=prog.machine_learning_seats){

                strcpy(stud[i].admission_status,"Waiting");
            }

            if(!strcmp(stud[i].program_first,"es") && prog.filled_es_seats<prog.embedded_systems_seats){
                prog.filled_es_seats++;
                strcpy(stud[i].admission_status,"Allotted");
                strcpy(stud[i].alloted_program,"es");
                reg_number++;
                stud[i].reg_number=reg_number;
            }
            else if(!strcmp(stud[i].program_first,"es") && prog.filled_es_seats>=prog.embedded_systems_seats){
                strcpy(stud[i].admission_status,"Waiting");
            }


        }

        else{
            strcpy(stud[i].admission_status,"Rejected");

        }

    }

        for(int i=1;i<num_of_reg+1;i++)
            printf("\n%s %s %s %d %f %d %s\n ",stud[i].name,stud[i].alloted_program,stud[i].email,stud[i].entrance_rank,stud[i].ug_grade,stud[i].reg_number,stud[i].admission_status);



}



void allot_waitinglist_seats(){

    //second round of allotment
    for(int i=1;i<num_of_reg+1;i++){
            if(!strcmp(stud[i].admission_status,"Waiting")){


                if(!strcmp(stud[i].program_second,"bda") && prog.filled_bda_seats<prog.big_data_seats){
                prog.filled_bda_seats++;
                strcpy(stud[i].admission_status,"Allotted");
                strcpy(stud[i].alloted_program,"bda");
                reg_number++;
                stud[i].reg_number=reg_number;
                }
                else if(!strcmp(stud[i].program_second,"bda") && prog.filled_bda_seats>=prog.big_data_seats){
                    strcpy(stud[i].admission_status,"Waiting");

                }

                if(!strcmp(stud[i].program_second,"ml") && prog.filled_ml_seats<prog.machine_learning_seats){
                    prog.filled_ml_seats++;
                    strcpy(stud[i].admission_status,"Allotted");
                    strcpy(stud[i].alloted_program,"ml");
                    reg_number++;
                    stud[i].reg_number=reg_number;
                }
                else if(!strcmp(stud[i].program_second,"ml") && prog.filled_ml_seats>=prog.machine_learning_seats){

                    strcpy(stud[i].admission_status,"Waiting");
                }

                if(!strcmp(stud[i].program_second,"es") && prog.filled_es_seats<prog.embedded_systems_seats){
                    prog.filled_es_seats++;
                    strcpy(stud[i].admission_status,"Allotted");
                    strcpy(stud[i].alloted_program,"es");
                    reg_number++;
                    stud[i].reg_number=reg_number;
                }
                else if(!strcmp(stud[i].program_second,"es") && prog.filled_es_seats>=prog.embedded_systems_seats){
                    strcpy(stud[i].admission_status,"Waiting");
                }


            }

        }

    //third round of allotment
    for(int i=1;i<num_of_reg+1;i++){
            if(!strcmp(stud[i].admission_status,"Waiting")){


                if(!strcmp(stud[i].program_third,"bda") && prog.filled_bda_seats<prog.big_data_seats){
                prog.filled_bda_seats++;
                strcpy(stud[i].admission_status,"Allotted");
                strcpy(stud[i].alloted_program,"bda");
                reg_number++;
                stud[i].reg_number=reg_number;
                }
                else if(!strcmp(stud[i].program_third,"bda") && prog.filled_bda_seats>=prog.big_data_seats){
                    strcpy(stud[i].admission_status,"Rejected");

                }

                if(!strcmp(stud[i].program_third,"ml") && prog.filled_ml_seats<prog.machine_learning_seats){
                    prog.filled_ml_seats++;
                    strcpy(stud[i].admission_status,"Allotted");
                    strcpy(stud[i].alloted_program,"ml");
                    reg_number++;
                    stud[i].reg_number=reg_number;
                }
                else if(!strcmp(stud[i].program_third,"ml") && prog.filled_ml_seats>=prog.machine_learning_seats){

                    strcpy(stud[i].admission_status,"Rejected");
                }

                if(!strcmp(stud[i].program_third,"es") && prog.filled_es_seats<prog.embedded_systems_seats){
                    prog.filled_es_seats++;
                    strcpy(stud[i].admission_status,"Allotted");
                    strcpy(stud[i].alloted_program,"es");
                    reg_number++;
                    stud[i].reg_number=reg_number;
                }
                else if(!strcmp(stud[i].program_third,"es") && prog.filled_es_seats>=prog.embedded_systems_seats){
                    strcpy(stud[i].admission_status,"Rejected");
                }


            }

    }


     for(int i=1;i<num_of_reg+1;i++)
            printf("\n%s %s %s %d %f %d %s\n ",stud[i].name,stud[i].alloted_program,stud[i].email,stud[i].entrance_rank,stud[i].ug_grade,stud[i].reg_number,stud[i].admission_status);


}
