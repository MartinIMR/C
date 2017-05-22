#define TRUE 1
#define FALSE 0
#ifndef listaD
#define listaD

typedef struct Nodo_ListaD
{
 int dato;
 struct Nodo_ListaD *siguiente;
 struct Nodo_ListaD *anterior;
}Nodo_ListaD;

typedef Nodo_ListaD * LISTA;

LISTA crearLista();
Nodo_ListaD * crearNodoLista();
int listaVacia(LISTA l);
void mostrarLista(LISTA l);
void buscarElemento(LISTA l,int elembus);
LISTA insertar(LISTA l,int e);
LISTA borrarElemento(LISTA l);
#endif

