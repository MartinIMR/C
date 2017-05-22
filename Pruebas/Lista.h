#define TRUE 1
#define FALSE 0
typedef struct Nodo_Lista
{
 int dato;
 struct Nodo_Lista *siguiente;
}Nodo_Lista;

typedef Nodo_Lista * LISTA;

LISTA crearLista();

Nodo_Lista * crearNodoLista();
int listaVacia(LISTA l);
void mostrarLista(LISTA l);
void buscarElemento(LISTA l,int elembus);
LISTA insertar(LISTA l,int e);
LISTA borrarElemento(LISTA l);


