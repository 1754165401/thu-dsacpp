#pragma once

template <typename T>
void Vector<T>::selectionSort ( Rank lo, Rank hi ) {
  while ( lo < --hi )
    swap ( _elem[ maxItem ( lo, hi) ], _elem[ hi ] );
}

template <typename T>
Rank Vector<T>::maxItem ( Rank lo, Rank hi ) {
  Rank mx = hi;
  while ( lo < hi-- ) 
    if ( _elem[ hi] > _elem[ mx ] )
      mx = hi;
  return mx;
}
