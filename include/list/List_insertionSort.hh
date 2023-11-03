#pragma once

template <typename T>
void List<T>::insertionSort ( ListNodePosi<T> p, int n ) {
  /*DSA*///printf ( "insertionSort ...\n" );
  for ( int r = 0; r < n; r++ ) {
    insert ( search ( p->data, r, p ), p->data );
    p = p->succ; remove ( p->pred );
  }
}
