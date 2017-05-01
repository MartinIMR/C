#define TRUE 1
#define FALSE 0

typedef struct Nodo_Pila
{
  int dato;
  struct Nodo_Pila *anterior;
} Nodo_Pila;

typedef struct
{
  Nodo_Pila *tope;
} Pila;

typedef Pila PILA;

PILA crearPila ();
Nodo_Pila *crearNodoPila ();
int stackEmpty (PILA);
void push (PILA, int);
int stackTop (PILA);
int pop (PILA);
