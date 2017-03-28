#define TRUE 1
#define FALSE 0
#define TAM 30

typedef struct
{
 int cont[TAM];
 int tope;
}Pila;

typedef Pila * PILA;

void manejaError(int);

PILA crearPila();

int stackEmpty(PILA);

void push(PILA,int);

int pop(PILA);

int stackTope(PILA);

int evaluar(PILA,char *);
