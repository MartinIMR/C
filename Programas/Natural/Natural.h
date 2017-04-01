#ifndef Natural
#define Natural

typedef unsigned short int Corto_ent;

struct Natural
{
 Corto_ent numero;

};

struct Natural * crearNatural();
Corto_ent esCero(struct Natural *);
Corto_ent sucesor(struct Natural *);
Corto_ent esMenor(struct Natural *,struct Natural *);
Corto_ent esMayor(struct Natural *,struct Natural *);
Corto_ent esMenorIgual(struct Natural *,struct Natural *);
Corto_ent esMayorIgual(struct Natural *,struct Natural *);
Corto_ent predecesor(struct Natural *);

#endif
