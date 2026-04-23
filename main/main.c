#include <stdio.h>
#include "rgb_led.h"
#include "delay.h"

// intervalo entre cambios de color
#define BLINK_PERIOD_MS 500  

void app_main(void)
{
    // Inicializar el LED RGB
    rgb_led_init();

    //Se crea un loop para que cambie de color intermitentemente
    while (1)    {
        // ROJO
        // Se llama a la función rgb_led_rojo() para encender el LED en color rojo, 
        // se imprime en consola el color y ademas se espera BLINK_PERIOD_MS antes de continuar.
        rgb_led_rojo();
        printf("Color: ROJO\n");
        delay_ms(BLINK_PERIOD_MS);

        // VERDE
        // Idem rojo
        rgb_led_verde();
        printf("Color: VERDE\n");
        delay_ms(BLINK_PERIOD_MS);

        // AZUL
        // Idem rojo
        rgb_led_azul();
        printf("Color: AZUL\n");
        delay_ms(BLINK_PERIOD_MS);

        // APAGADO
        // Se llama a la función rgb_led_off() para apagar el LED, se imprime en consola 
        // el estado de apagado y se espera BLINK_PERIOD_MS antes de volver a hacer el loop otra vez.
        rgb_led_off();
        printf("Color: APAGADO\n");
        delay_ms(BLINK_PERIOD_MS);
    }
}
