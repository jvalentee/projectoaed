#include "EventList.h" /*Including here as well since we need to have access to this before and it only comes after in defs.h*/
#include "Defs.h"

typedef struct interestpoint InterestPoint;
Array GraphDecoderInit(char ***, int, int, int, int);
char GetIP_Type(int, Array);
int GetIP_Coord(int, char, Array);
int FindIP(int, int, int, int, Array);
void OccupyPos(int, Array, int);
void FreePos(int, Array, int);
int GetFlagRes(int, Array);
void HandleRestriction(Event *, Array, int);
void ReleasePos(int, Array decoder, int vertices);
void RestrictPos(int, Array decoder, int vertices);
void ChangeIP_Type(int i, Array decoder, char type);
