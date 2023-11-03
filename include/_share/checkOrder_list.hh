#pragma once

#include "list/list.hh"

template <typename T> void checkOrder ( List<T> & L ) {
  int nInv = 0;
  L.traverse ( CheckOrder<T> ( nInv, L.first()->data ) );
  if ( 0 < nInv )
    printf ( "Unsorted with %d adjacent inversion(s)\n", nInv );
  else
    printf ( "Sorted\n");
}
