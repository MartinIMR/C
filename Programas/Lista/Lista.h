#define TRUE 1
#define FALSE 0
typedef struct Nodo_Lista
{
      int dato;
        struct Nodo_Lista *siguiente;
} Nodo_Lista;

typedef Nodo_Lista *LISTA;

LISTA crearLista ();
int sacarElemento(LISTA *);
Nodo_Lista *crearNodoLista ();
int listaVacia (LISTA );
void mostrarLista (LISTA );
void buscarElemento (LISTA, int);
LISTA insertar (LISTA , int );
LISTA borrarElemento (LISTA,int );

