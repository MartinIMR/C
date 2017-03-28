#define TRUE 1
#define FALSE 0
#define TAM 100

typedef struct
{
 char cont[TAM];
 int tope;
}Pila;

typedef Pila * PILA;

void manejaError(int);

int checaParentesis(PILA);

PILA crearPila();

int stackEmpty(PILA);

void push(PILA,int);

int pop(PILA);

int stackTope(PILA);
