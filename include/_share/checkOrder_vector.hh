#pragma once

#include "vector/vector.hh"

template <typename T> void checkOrder ( Vector<T> & V ) {
  int unsorted = 0;
  V.traverse ( checkOrder<T> ( unsorted, V[0] ) );
  if ( 0 < unsorted )
    printf ( "unsorted with %d adjacent inversion(s)\n", unsorted);
  else
    printf ( "Sorted\n" );
}
