#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <time.h>

typedef struct cartelera {
    char* Nombre; 
    char estado;        //si esta en estreno o no 
    int duracion; 
    char clasificacion; 
    char version; //doblada o subtitulada 
    char dias_transmision; 

}cartelera; 

typedef struct entradas{
    char pelicula;
    char 
};


int main (){
    int opcion; 
    char repetir = true; 

    do{
        system("cls")

        printf("\n\n\t\t\tMenu de Opciones\n");
        printf("\t\t\t----------------\n");
        printf("\n\t1. Ingresar pelicula\n");
        printf("\t2. Peliculas en emision\n");
        printf("\t3. Calendario semanal\n");
        printf("\t4. Peliculas segun su clasificacion\n");
        printf("\t5. Peliculas en estreno\n");
        printf("\t6. Duracion de peliculas\n");
        printf("\t7. Las 3 peliculas mas vista de la semana\n");
        printf("\t8. Eliminar pelicula de estreno\n");
        printf("\t9. Eliminar pelicula\n");
        printf("\t0. SALIR\n");

        printf("\n\tIngrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            ingresar_pelicula();
            break;
        
        case 2:
            peliculas_emision();
            break;

        case 3:
            calendario_semanal();
            break;

        case 4:
            clasificacion_pelicula();
            break;

        case 5:
            estreno_pelicula();
            break;
        
        case 6:
            duracion_pelicula();
            break;
        
        case 7:
            tres_peliculas();
            break;
        
        case 8:
            eliminar_estreno();
            break;
        
        case 9:
            eliminar_pelicula();
            break;

        case 0:
            repetir = false;
            break;


        }
    }
} 
void ingresar_pelicula(){

}

void peliculas_emision(){

} 

void calendario_semanal(){

}

void clasificacion_pelicula(){

}

void estreno_pelicula(){

}

void duracion_pelicula(){

} 
void tres_peliculas(){

} 
void eliminar_estreno(){

}
void eliminar_pelicula(){

}