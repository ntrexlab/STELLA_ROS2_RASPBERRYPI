#include <iostream>

#include "MwIEEE754.hpp"

//void MDC24D_rpm_to_pulse(int ID, float L_rpm, float R_rpm, int pulse[2],int ch);

void MDC24D_move(int ID, float L_rpm, float R_rpm);
void MDC24D_read(int ID,int pulse[2]);


