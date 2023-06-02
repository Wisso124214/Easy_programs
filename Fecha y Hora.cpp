
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// Imprime la fecha y hora actual en C
int main(void)
{
    // variables para almacenar los componentes de fecha y hora
    int hours, minutes, seconds, day, month, year;
 
    // `time_t` es un tipo de tiempo aritmético
    time_t now;
 
    // Obtener la hora actual
    // `time()` devuelve la hora actual del sistema como un valor `time_t`
    time(&now);
 
    // Convertir al formato de hora local e imprimir a stdout
    printf("Today is %s", ctime(&now));
 
    // localtime convierte un valor de `time_t` a la hora del calendario y
    // devuelve un puntero a una estructura `tm` con sus miembros
    // rellenado con los valores correspondientes
    struct tm *local = localtime(&now);
 
    hours = local->tm_hour;         // obtener horas desde la medianoche (0-23)
    minutes = local->tm_min;        // obtener minutos pasados después de la hora (0-59)
    seconds = local->tm_sec;        // obtener segundos pasados después de un minuto (0-59)
 
    day = local->tm_mday;            // obtener el día del mes (1 a 31)
    month = local->tm_mon + 1;      // obtener el mes del año (0 a 11)
    year = local->tm_year + 1900;   // obtener el año desde 1900
 
    // imprime la hora local
    if (hours < 12) {    // antes del mediodia
        printf("Time is %02d:%02d:%02d am\n", hours, minutes, seconds);
    }
    else {    // Después de mediodía
        printf("Time is %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);
    }
 
    // imprime la fecha actual
    printf("Date is: %02d/%02d/%d\n", day, month, year);
 
    return 0;
}