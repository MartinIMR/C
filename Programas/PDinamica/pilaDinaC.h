/*Version de la pila Dinamica usando char*/
#define TRUE 1
#define FALSE 0

typedef struct Nodo_Pila
{
  char dato;
  struct Nodo_Pila *anterior;
} Nodo_Pila;

typedef struct
{
  Nodo_Pila *tope;
} Pila;

typedef Pila * PILA;

PILA crearPila ();
Nodo_Pila *crearNodoPila ();
int stackEmpty (PILA);
void push (PILA, char);
char stackTop (PILA);
char pop (PILA);
