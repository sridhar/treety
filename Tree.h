/*
 * File name: Tree.h
 * Date:      2013/11/13 15:47
 * Author:    Sridhar V Iyer (sridhiye@cisco.com)
 * Description: Tree node
 *
 */

#ifndef __TREE_H__
#define __TREE_H__
/*
 * Class Operations
 * ================
 *
 * Public Interfaces
 * =================
 * 
 * Maintenance History
 * ==================
 *
 */
#include "Showoff.h"

class Tree {
    private:
        int _data;
        Tree *left;
        Tree *right;
        Tree *parent;
    public:
        Tree():_data(0),left(NULL),right(NULL),parent(NULL) {}
        Tree(int val):_data(val),left(NULL),right(NULL),parent(NULL) {}
       // Tree(int val, Tree *l, Tree *r, Tree *p):_data(val),left(l),right(r),parent(p) {}
        Tree(int val[], int count);
        ~Tree(); 

        /****************************************/
        // Setters and getters  
        void setLeft(const int &val);
        void setRight(const int &val);
        void setLeft(Tree *node);
        void setRight(Tree *node);

        //Tree *getLeft();
        //Tree *getRight();
        //Tree *getParent();
        /****************************************/
          
        //void add(int val); add for avl trees
        //void printDFS();
        void printBFS();
        void addBST(int val);
        Showoff *dispTree();
};

#endif

/* end of Tree.h */
