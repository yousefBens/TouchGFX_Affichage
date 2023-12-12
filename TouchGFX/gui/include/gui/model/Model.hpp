#ifndef MODEL_HPP
#define MODEL_HPP
#include "main.h"

#include <string.h>
#include <stdio.h>


class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }
    static int16_t data_raw_humidity;
      static int16_t data_raw_temperature;
      static float humidity_perc;
      static float temperature_degC;
      static uint8_t tx_buffer[1000];
      float Humedite();
      void affich_H();
      float Temperature();
      void affiche_T();

    void tick();
protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
