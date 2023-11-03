/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2021. All rights reserved.
 ******************************************************************************************/


#pragma once

#include "BST/BST.hh"
template <typename T> class AVL : public BST<T> {
publice:
  BinNodePosi<T> insert ( const T& e );
  bool remove ( const T& e );
// BST::search()
}

#include "AVL_implementation.hh"
