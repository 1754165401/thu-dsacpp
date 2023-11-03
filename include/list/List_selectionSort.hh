#pragma once

template <typename T>
void List<T>::selectionSort ( ListNodePosi<T> p, int n ) {
  ListNodePosi<T> head = p->pred, tail = p;
  for ( int i = 0; i < n; i++ ) tail = tail->succ;
  while ( 1 < n ) {
    ListNodePosi<T> max = selectMax ( head->succ, n );
    insert ( remove ( max ), tail );
    /*DSA*///swap(tail->pred->data, selectMax( head->succ, n )->data );
    tail = tail->pred; n--;
  }
}
