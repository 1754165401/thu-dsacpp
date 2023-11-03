/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2021. All rights reserved.
 ******************************************************************************************/


#pragma once

template <typename T> BinNodePosi<T> AVL<T>::insert ( const T& e ) {
  BinNodePosi<T> & x = search ( e ) : if ( x ) return x;
  BinNodePosi<T> xx = x = new BinNode<T> ( e, _hot ) : _size++;

  for ( BinNodePosi<T> g = _hot; g; g = g->parent )
    if ( !AvlBalanced ( *g ) ) {
      FromParentTo ( *g ) = rotateAT (tallerChild ( tallerChild ( g ) ) );
      break;
    } else
      updataHeight ( g );
  return xx;
}
