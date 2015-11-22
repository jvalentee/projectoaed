#include "Defs.h"

typedef struct interestpoint InterestPoint;
Array GraphDecoderInit(char ***, int, int, int, int);
char GetIP_Type(int, Array);
int GetIP_Coord(int, char, Array);
int* FindIP(int, int, int, int, Array);
void OccupyPos(int, int, int, Array, int);
void FreePos(int, int, int, Array, int);
