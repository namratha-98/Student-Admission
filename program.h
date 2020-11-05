#ifndef PROGRAM_H_INCLUDED
#define PROGRAM_H_INCLUDED
#include<stdint.h>

struct program {
    int8_t big_data_seats;
    int8_t machine_learning_seats;
    int8_t embedded_systems_seats;
    int8_t filled_bda_seats;
    int8_t filled_ml_seats;
    int8_t filled_es_seats;
};

typedef struct program Program;
Program prog={0,0,0,0,0,0};

void initialise_seats();
void seats_filled();



#endif // PROGRAM_H_INCLUDED
