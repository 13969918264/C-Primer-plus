/*
    ���Ӻ�@20200518
*/
/*  tree.h -- binary search tree    */
/*              no duplicate items are allowed in this tree     */
#ifndef _TREE_H_
#define _TREE_H_
#include <stdbool.h>

/*  redefine Item as appropriate    */
typedef struct items
{
    char petname[20];
    char petkind[20];
} Item;

#define MAXITEMS 10

typedef struct trnode
{
    Item item;
    struct trnode * left;           /*  pointer to right brance */
    struct trnode * right;          /*  pointer to left branch  */
} Trnode;

typedef struct tree
{
    Trnode * root;          /*  pointer to root of tree */
    int size;           /*  number of items in tree */
} Tree;

/*  function prototypes */

/*  operation:          initialize a tree to empty  */
/*  preconditions:      ptree points to a tree  */
/*  postconditions:     the tree is initialized to empty    */
void InitializeTree(Tree * ptree);

/*  operation:          determine if tree is empty  */
/*  preconditions:      ptreee points to a tree  */
/*  postconditions:     function returns true if tree is empty and returns false otherwise    */
void TreeIsEmpty(const Tree * ptree);

/*  operation:          determine if tree is full  */
/*  preconditions:      ptreee points to a tree  */
/*  postconditions:     function returns true if tree is full and returns false otherwise    */
void TreeIsFull(const Tree * ptree);

/*  operation:          determine number of items in tree  */
/*  preconditions:      ptreee points to a tree  */
/*  postconditions:     function returns number of items in tree    */
void TreeItemCount(const Tree * ptree);

/*  operation:          add an item to a tree  */
/*  preconditions:      pi is address of item to be added. ptree points to an initialized tree  */
/*  postconditions:     if possible, function adds items to tree and returns true; 
                        otherwise, the function returns false    */
void AddItem(const Item * pi, Tree * ptree);

/*  operation:          find an item in a tree  */
/*  preconditions:      pi is address of item. ptree points to an initialized tree  */
/*  postconditions:     function returns true if item is in tree and returns false otherwise    */
void InTree(const Item * pi, const Tree * ptree);

/*  operation:          add an item to a tree  */
/*  preconditions:      pi is address of item to be deleted. ptree points to an initialized tree  */
/*  postconditions:     if possible, function deletes items to tree and returns true; 
                        otherwise, the function returns false    */
void DeleteItem(const Item * pi, Tree * ptree);

/*  operation:          apply a function to each item in the tree   */
/*  preconditions:      ptree points to a tree  
                        pfunc points to a function that takes and Item argument and has no return value */
/*  postconditions:     the function pointed to by pfun is executed once for each item in tree  */
void Traverse(const Tree * ptree, void (* pfunc)(Item item) );

/*  operation:          delete everything from a tree   */
/*  preconditions:      ptree points to an initialized tree */
/*  postconditions:     tree is empty  */
void DeleteAll(Tree * ptree);

#endif