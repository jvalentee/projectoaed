#include "Defs.h"


typedef struct eventstruct Event;
ListNode * EventListInit( FILE* carconfig, FILE* resconfig );
int GetEventTime(Event* event);
int CompareEventTime(Item event1, Item event2, int direction);
char GetEventType(Event* event);
char* GetEventCar(Event* event);
int GetEventCoord(Event* event, char coord);
void PrintEventList(ListNode*);
void ExecuteEvent( ListNode *, ListNode *, int,  Array, int, char*);