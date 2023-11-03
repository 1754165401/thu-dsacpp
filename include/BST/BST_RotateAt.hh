#pragma once

template <typename T> BinNodePosi<T> BST<T>::rotateAt ( BinNodePosi<T> v ) {
  /*DSA*/if ( !v ) { printf ("\a\nFail to rotate a null node\n" ); exit ( -1 ); }
  BinNodePosi<T> p = v->parent; BinNodePosi<T> g = p->parent;
  if ( IsChild ( *p ) )
    if ( IsChild ( *p ) ) {
      p->parent = g->parent;
      return connect34 ( v, p, g, v->lc, v->rc, p->rc, g->rc );
    } else {
      v->parent = g->parent;
      return connect34 ( p, v, g, p->lc, v->lc, v->rc, g->rc );
    }
  else
    if ( IsRChild ( *v ) ) {
      p->parent = g->parent;
      return connect34 ( g, p, v, g->lc, p->lc, v->lc, v->rc );
    } else {
      v->parent = g->parent;
      return connect34 ( g, v, p, g->lc, v->lc, v->rc, p->rc );
    }
}
