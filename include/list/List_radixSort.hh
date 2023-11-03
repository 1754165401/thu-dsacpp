#pragma once

typedef unsigned int U;

template <typename T>
void List<T>::radixSort ( ListNodePosi<T> p, int n ) {
  ListNodePosi<T> head = p->pred; ListNodePosi<T> tail = p;
  for ( int i = 0; i < n ; i++ ) tail = tail->succ;
  for ( U radixBit = 0x1; radixBit && (p = head); radixBit <<= 1)
    for ( int i = 0; i < n; i++ )
      radixBit & U (p->succ->data) ?
        insert( remove( p->succ ), tail ) : p = p->succ;
}
