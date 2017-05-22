/* Codigo de lista doble Aun no realizado */

LISTA crearLista()
{
 LISTA l;
 l=NULL;
 return l;
};

Nodo_Lista * crearNodoLista()
{
 Nodo_Lista * nl;
 nl=(Nodo_Lista *) malloc(sizeof(Nodo_Lista));
 if(nl == NULL)
 {
    manejaError(0);
    exit(0);
 };
 return nl;
};

int listaVacia(LISTA l)
{
    if( l == NULL )
    {
        return TRUE;
    }else{
        return FALSE;
    };
};
void mostrarLista(LISTA l)
{
    Nodo_Lista *aux;
    if(listaVacia(l) == TRUE)
    {
        manejaError(5);
        exit(0);
    };
    aux=l;
    while(aux != NULL)
    {
        printf("%d",aux->dato);
        aux=aux->siguiente;
    };

};

void buscarElemento(LISTA l,int elembus)
{
    Nodo_Lista *aux;
    int pos=0;
    if(listaVacia(l) == TRUE)
    {
        manejaError(5);
        exit(0);
    };
    aux=l;
    while(aux != NULL && elembus != aux->dato)
    {
    pos++;
    aux=aux->siguiente;
    };
    if(aux == NULL)
    {
    printf("No se encuentra el elemento %d en la lista",elembus);
    }else{
    printf("El elemento esta en la posicion %d \n",pos);
    };
};
LISTA insertar(LISTA l,int e)
{
    Nodo_Lista *nl;
    Nodo_Lista aux;
    aux=crearNodoLista();
    nl=crearNodoLista();
     nl->dato=e;
     nl->siguiente=NULL;
    if(listaVacia(l) == TRUE)
    {
     l=nl;
    }else{
    aux=l;
    while(aux->siguiente != NULL)
    {
    aux=aux->siguiente;
    };
    aux->siguiente=nl;
  };
return l;
};
LISTA borrarElemento(LISTA l,int elemBorrar)
{
    Nodo_Lista *aux;
    Nodo_Lista *aux2;
    if(listaVacia(l) == TRUE)
    {
    manejaError(5);
    exit(0);
    };
    aux=l;
    aux2=l;
    while(aux != NULL && elemBorrar != aux -> dato)
    {
        aux2=aux;
        aux=aux->siguiente;
    };
    if(aux == NULL)
    {
    printf("El elemento a borrar no se encuentra en la lista ");
    }else if(aux == aux2){
    l=NULL;
    }else{
    aux2->siguiente=aux->siguiente;
    };
    free(aux);
    return l;
};


