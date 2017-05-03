#define TRUE 1
#define FALSE 0

typedef struct Info
{
 int id;
 int cda;
 char nombrep[100];
 char forma[100];
}Info;

typedef struct Nodo_Pila
{
  struct Info *ic;
  struct Nodo_Pila *anterior;
} Nodo_Pila;

typedef struct
{
  Nodo_Pila *tope;
} Pila;

typedef Pila * PILA;

PILA crearPila ();
Info *crearInfo();
Nodo_Pila *crearNodoPila ();
int stackEmpty (PILA);
void push (PILA, int,int,char *,char *);
int stackTop (PILA);
int pop (PILA);
