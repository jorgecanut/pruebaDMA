#include "main.h"
#include "ST-LIB.hpp"

int main(void) {
#ifdef SIM_ON
    SharedMemory::start();
#endif
    ADC::inscribe(PA0);
    STLIB::start();

    ADC::turn_on(0);
    ADC::get_value_pointer(0);
    
    // meter en un bucle e ir mostrando valores
    ADC::get_int_value(0);
    
    

    while (1) {
        STLIB::update();
    }
}

void Error_Handler(void) {
    ErrorHandler("HAL error handler triggered");
    while (1) {
    }
}
