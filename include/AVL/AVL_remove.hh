#pragma once

template <typename T> bool AVL<T>::remove ( const T& e ) {
  BinNodePosi<T> & x = search ( e ); if ( !x ) return false;
  removeAt ( x, _hot ); _size--;
  for ( BinNodePosi<T> g = _hot; g; g = g->parent ) {
    if ( !AvlBalanced ( *g ) )
      g = FromParentTo ( *g ) = rotateAt ( tallerChild ( tallerChild ( g ) ) );
    updatHeight ( g );
  }
  return true;
}
