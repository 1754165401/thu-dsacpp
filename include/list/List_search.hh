#pragma once

template <typename T>
ListNodePosi<T> List<T>::search ( T const& e, int n, ListNodePosi<T> p ) const {
// assert: 0 <= n <= rank(p) < _size
  /*DSA*/printf ( "searching for " ); print ( e ); printf ( " :\n" );
  do {
    p = p->pred; n--;
    /*DSA*/  printf ( " -->%4d", p->data );
  } while ( ( -1 < n ) && ( e < p->data ) );
  /*DSA*/  printf ( "\n" );
  return p;
}
