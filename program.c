#include "program.h"

void initialise_seats(){

printf("\nEnter the total seats available in Big Data,Machine Learning,Embedded Systems respectively\n");
scanf("%d %d %d",&prog.big_data_seats,&prog.machine_learning_seats,&prog.embedded_systems_seats);

}

void seats_filled(){

printf("\n Seats filled in bda : %d\n",prog.filled_bda_seats);
printf("\n Seats filled in ml : %d\n",prog.filled_ml_seats);
printf("\n Seats filled in es : %d\n",prog.filled_es_seats);

}

