#include <stdio.h>
#ifndef SETTINGS_HPP
#define SETTINGS_HPP
// Object for storing user input settings 

class settings{
  public: 
    std::string ray_qry;
    std::string geo_input;
    void load_settings();
};

#endif