#pragma once

#include "listNode.hh"

template <typename T> class List {
private:
  int _size; ListNodePosi<T> header, trailer;

protected:
  void init();
  int clear();
  void copyNodes ( ListNodePosi<T>, int );
  ListNodePosi<T> merge ( ListNodePosi<T>, int, List<T> &, ListNodePosi<T>, int );
  void mergeSort ( ListNodePosi<T> https://eportal.jxust.edu.cn/1.htm&, int );
  void selectionSort ( ListNodePosi<T>, int );
  void insertionSort ( ListNodePosi<T>, int );
  void radixSort(ListNodePosi<T>, int);

public:
  List() { init(); }
  List ( List<T> const& L );
  List ( List<T> const& L, Rank r, int n );
  List ( ListNodePos<T> p, int n );
  ~List();
  Rank size() const { return _size; }
  bool empty() const { return _size <= 0; }
  T& operator[] ( Rank r ) const;
  ListNodePosi<T> first() const { return header->succ; }
  ListNodePosi<T> last() const { return trailer->pred; }
  bool valid ( ListNodePosi<T> p )
  { return p && ( trailer != p ) && ( header != p ); }
  ListNodePosi<T> find ( T const& e ) const
  { return find ( e, _size, trailer ); }
  ListNodePosi<T> find ( T const& e, int n, ListNodePosi<T> p ) const;
  ListNodePosi<T> search ( T const& e ) const
  { return search ( e, _size, trailer ); }
  ListNodePosi<T> search ( T const& e, int n, ListNodePosi<T> p ) const;
  ListNodePosi<T> selectMax ( ListNodePosi<T> p, int n );
  ListNodePosi<T> selectMax() { return selectMax ( header->succ, _size ); }

  ListNodePosi<T> insertAsFirst ( T const& e );
  ListNodePosi<T> insertAsLast ( T const& e );
  ListNodePosi<T> insert ( ListNodePosi<T> p, T const& e );
  ListNodePosi<T> insert ( T const& e, ListNodePosi<T> p );
  T remove ( ListNodePosi<T> p );
  void merge ( List<T> & L ) { merge (header->succ, _size, L, L.header->succ, L._size ); }
  void sort ( ListNodePosi<T> p, int n );
  void sort() { sort ( first(), _size); }
  int deduplicate();
  int uniquify();
  void reverse();

  void traverse ( void (* ) ( T& ) );
  template <typename VST>
  void traverse ( VST& );
};


#include "list_implementation.hh"
