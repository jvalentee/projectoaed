#include "Defs.h"

typedef struct parkinglot ParkingLot;

ParkingLot * InitParkingLot( FILE *, int, int, int, int);
ParkingLot * MapInit(FILE *);
char *** MatrixInit(int*, int*, FILE *, int, int, int);
int * InitAccesses(int, Array, int);
int * InitRamps(int, Array, int);
void FreeMatrix(char ***, int, int, int);
Graph* GetPLGraph(ParkingLot*);
int GetVertices(ParkingLot);
Array GetDecoder(ParkingLot);