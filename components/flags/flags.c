#include "flags.h"


flags_t CONTROL_FLAGS;

void flags_init(){
    CONTROL_FLAGS.raw_flags = 0;
}

bool flags_is_nvs_ok(){
    if(CONTROL_FLAGS.nvs){
        return true;
    }
    else{
        return false;
    }
}

void flags_set_nvs_ok(){
    CONTROL_FLAGS.nvs = 1;
}