#pragma once

template <typename T>
ListNodePosi<T> List<T>::merge ( ListNodePosi<T> p, int n, List<T> & L, ListNodePosi<T> q, int m ) {
//assert: this.valid(p) && rank(p) + n <= size && this.sorted(p, n)
//        L.valid(q) && rank(p) + m <= L._size && L.sorted(q,m)

  ListNodePosi<T> pp = p->pred;
  while ( ( 0 < m ) && ( q != p ) )
    if ( ( 0 < n ) && ( p->data <= q->data ) )
      { p = p->succ; n--; }
    else
      { insert ( L.remove ( ( q = q->succ )->pred ), p ); m--; }
  return pp->succ;
}
