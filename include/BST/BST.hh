#pragma once

#include "BinTree/BinTree.hh"

template <typename T> class BST : public BinTree<T> {
protected:
  BinNodePosi<T> _hot;
  BinNodePosi<T> connect34 (
      BinNodePosi<T>, BinNodePosi<T>, BinNodePosi<T>,
      BinNodePosi<T>, BinNodePosi<T>, BinNodePosi<T>, BinNodePosi<T> );
  BinNodePosi<T> rotateAt ( BinNodePosi<T> x );
public:
  virtual BinNodePosi<T> & search ( const T& e );
  virtual BinNodePosi<T> insert ( const T& e );
  virtual bool remove ( const T& e );
  /*DSA*/
  /*DSA*/void stretchToLPath() { stretchByZag ( _root ); }
  /*DSA*/void stretchToRPath() { stretchByZig ( _root ); }
  /*DSA*/void stretch();
  /*DSA*/void balance() { _root = _root->balance(); }
  /*DSA*/void imitate( BST<T> Y ) { _root = _root->imitate( Y._root ); }
};

#include "BST_implementation.hh"
