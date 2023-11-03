#pragma once

template <typename T> void List<T>::sort ( ListNodePosi<T> p, int n ) {
  //*DSA*/ switch ( 3 ) {
  switch ( rand() % 4 ) {
    case 1: insertionSort ( p, n ); break;
    case 2: selectionSort ( p, n ); break;
    case 3: mergeSort ( p, n ); break;
    default: radixSort ( p, n ); break;
  }
}
