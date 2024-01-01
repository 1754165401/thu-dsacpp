#pragma once

template <typename T>
void Vector<T>::bubbleSort( Rank lo, Rank hi ) {
  for ( Rank last; lo < hi; hi = last )
    for ( Rank i = ( last = lo ) + 1; i < hi; i++ )
      if ( _elem[ i-1 ] > _elem[ i ] )
        swap( _elem[ i-1 ], _elem [ last = i ] );
}
