#define TAM 100
#define TRUE 1
#define FALSE 0

typedef struct
{
 int ac[TAM];
 int primero;
 int ultimo;
 int elementos;

}Cola;

typedef Cola * COLA;

void manejaError(int a);

COLA crearCola();

int colaVacia(COLA C);


int primero(COLA C);

void encolar(COLA C, int e);

int desencolar(COLA C);

int sig(int pos);


