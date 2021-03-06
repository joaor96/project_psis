/***************************************************************************
* PSis-project 2016-17
* by
* João Rodrigues and Sara Vieira
*
* list.h
* All functions that manage a list.
****************************************************************************/

#ifndef LinkedListHeader
#define LinkedListHeader

typedef void *Item;
typedef struct LinkedListStruct LinkedList;


LinkedList * initLinkedList(void);
void freeLinkedList(LinkedList * first, void (* freeItemFnt)(Item));
LinkedList *nextHeadLinkedList(LinkedList * head);
LinkedList * getNextNodeLinkedList(LinkedList * node);
Item getItemLinkedList(LinkedList * node);
Item findItemLinkedList(LinkedList * head, Item item, int (* comparisonItemFnt) (Item item1, Item item2));
Item *findItemVectorLinkedList(LinkedList * head, Item item, int (* comparisonItemFnt) (Item item1, Item item2), int *count);
LinkedList * insertUnsortedLinkedList(LinkedList * , Item );
LinkedList * insertSortedLinkedList(LinkedList * first, Item item, int (* comparisonItemFnt) (Item item1, Item item2));
LinkedList * deleteItemLinkedList(LinkedList * head, Item item, int *ret, int (* comparisonItemFnt) (Item item1, Item item2), void (* freeItemFnt) (Item item1));


#endif
